// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends



long long  numberOfPaths(int m, int n)
{
    // Code Here
    if(m==1 || n==1) return 1;
    return numberOfPaths(m-1, n) + numberOfPaths(m, n-1);
}

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends