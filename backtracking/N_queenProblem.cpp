// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    unordered_map<int, int> diag1, diag2;
    public:
    
    void solve(vector<vector<int>> &ans, int i, int n, vector<bool> cols, vector<int> vec){
        if(i==n){
            ans.push_back(vec);
            return;
        }
        
        for(int j=0; j<n; j++){
            if(cols[j] || diag1[i+j] || diag2[i-j]){ 
                continue;
            }
            cols[j]=true;
            diag1[i+j]=1;
            diag2[i-j]=1;
            vec.push_back(j+1);
            solve(ans, i+1, n, cols, vec);
            
            vec.pop_back(); 
            cols[j]=false; 
            diag1[i+j]=0; 
            diag2[i-j]=0; 
        }
    } 
    
    vector<vector<int>> nQueen(int n) {
        vector<bool> cols(n,false);
        vector<vector<int>> ans;
        solve(ans, 0, n, cols, {});
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends