// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
	sort(arr, arr+n);
	sort(dep, dep+n);
	int i = 1;
	int j = 0;
	int p = 1;
	int max = 1;
	while(i<n && j<n){
	    if(arr[i] > dep[j]){
	        p--;
	        j++;
	    }else if(arr[i] <= dep[j]){
	        p++;
	        i++;
    	    if(p > max){
                max = p;
            }
	    }
	}
	return max;
}


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends