// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    unsigned long long int optimalKeys(int N){
        // code here
        int n = N;
        unsigned long long int dp[n+1];
        for(int i=0; i<=5; i++){
            dp[i] = i;
        }for(int j=6; j<=n; j++){
            dp[j] = dp[j-1] + 1;
            for(int i=1; i<=j-3; i++){
                dp[j] = max(dp[j], (j-i-1)*dp[i]);
            }
        }
        return dp[n];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.optimalKeys(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends