// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return minimum number of jumps to end of array
int minJumps(int arr[], int n){

    int count = 0;
    int i = 0;
    while(i < n-1) {
        if(arr[i] == 0)
            return -1;
        if(arr[i]+i >= n-1) {
            count++;
            return count;
        }
        int mx = INT_MIN;
        int loc = 0;
        for(int j = 1; j <= arr[i]; j++) {
            if(mx+loc < arr[j+i]+j) {
                mx = arr[j+i];
                loc = j;
            }
        }
        count++;
        i += loc;
    }
    return count;

}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends