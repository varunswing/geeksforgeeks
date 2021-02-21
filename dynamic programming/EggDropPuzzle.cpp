// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to get minimum number of trials needed in worst 
  case with n eggs and k floors */
int eggDrop(int n, int k){
    vector<int> dp(n + 1, 0);
    int i;
    for (i = 0; dp[n] < k; i++){
        for (int k = n; k > 0; --k){
            dp[k] += dp[k - 1] + 1;
        }
    }
    return i;
}

// { Driver Code Starts.

int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;

        //calling function eggDrop()
        cout<<eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends