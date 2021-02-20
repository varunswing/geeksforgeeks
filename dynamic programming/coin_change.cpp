// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    long long int count( int S[], int m, int n){
    
        long long int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=dp[i-1][j];
                if(j-S[i-1]>=0){
                    dp[i][j]+=dp[i][j-S[i-1]];
                }
            }
        }
        return dp[m][n];
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}
    
    
    return 0;
}  // } Driver Code Ends