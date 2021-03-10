// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 
long long countWays(int);
 
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		
		//calling function countWays()
		cout << countWays(n) << endl;
	}
    
    return 0;
    
}
// } Driver Code Ends


// function to count number of ways to reach top of the stair
long long countWays(int n){
    
    // your code here
    long long dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for(long long i=4; i<=n; i++){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3])%1000000007;
    }
    return dp[n];
  
}