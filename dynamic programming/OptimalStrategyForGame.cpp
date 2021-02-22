// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


long long maximumAmount(int arr[], int n)
{
// long long ans = 0;
    long long dp[n][n];
    
    for(int g = 0; g < n; g++) {
        for(int i = 0, j = g; j < n; i++, j++) {
            if(g == 0) {
                dp[i][j] = arr[i];
            }else if(g == 1) {
                dp[i][j] = max(arr[i] , arr[j]);
            }else {
                int val1 = arr[i] + min(dp[i + 2][j], dp[i + 1][j - 1]);
                int val2 = arr[j] + min(dp[i + 1][j - 1], dp[i][j - 2]);
                int val = max(val1 , val2);
                dp[i][j] = val;
            }
        }
    }
    
    return dp[0][n -1];
}

// { Driver Code Starts.

int main() {
    
    //taking total testcases
	int T;
	cin>>T;
	while(T--)
	{
	    //taking number of elements
	    int N;
	    cin>>N;
	    
	    int A[N];
	    
	    //inserting the elements
	    for(int i=0;i<N;i++)
	    cin>>A[i];
	    
	    //calling function maximumAmount()
	    cout<<maximumAmount(A,N)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends