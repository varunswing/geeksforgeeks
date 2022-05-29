// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

// class Solution{
// public:
//     vector<int> leftSmaller(int n, int a[]){
//         // code here
//         vector<int> v;
//         for(int i=n-1; i>0; i--){
//             for(int j=i-1; j>=0; j--){
//                 if(a[i] > a[j]){
//                     v.push_back(a[j]);
//                     break;
//                 }
//                 if(j==0 && a[j] >= a[i]){
//                     v.push_back(-1);
//                 }
//             }
//         }
//         v.push_back(-1);
//         reverse(v.begin(), v.end());
//         return v;
//     }
// };

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        vector<int> v;
        stack<int> s;
        for(int i=0; i<n; i++){
            while(!s.empty() && s.top() >= a[i]){
                s.pop();
            }
            
            if(s.empty()){
                v.push_back(-1);
            }else{
                int a = s.top();
                v.push_back(a);
            }
            
            s.push(a[i]);
        }
        return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends