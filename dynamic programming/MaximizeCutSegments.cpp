// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int maximizeTheCuts(int n, int x, int y, int z);

int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        
        //calling function maximizeTheCuts()
        cout<<maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}// } Driver Code Ends


//Complete this function
int maximizeTheCuts(int n, int x, int y, int z)
{
    int dp[n+1];
    
    dp[0] = 0;
    
    for(int i = 1; i <= n; i++){
        dp[i] = -1;
        
        if(i-a >= 0){
            dp[i] = max(dp[i], dp[i-a]);
        }
        
        if(i-b >= 0){
            dp[i] = max(dp[i], dp[i-b]);
        }
        
        if(i-c >= 0){
            dp[i] = max(dp[i], dp[i-c]);
        }
        
        if(dp[i] != -1){
            dp[i]++;
        }
    }
    
    return max(dp[n], 0);
}