// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        int max = 0;
        int left = 0;
        int right = 0;
        vector<vector<int>> v;
        vector<int> ans;
        for(int i=0; i<n-1; i++){
            if(A[i+1] > A[i]){
                ans.push_back(i);
                while(A[i+1] >= A[i] && i<n-1){
                    right = i+1;
                    i++;
                }
                ans.push_back(right);
                v.push_back(ans);
                ans.clear();
            }
        }
        return v;
    }
};

// { Driver Code Starts.

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for (int i=0; i<ans.size(); ++i){
                cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
            }
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends