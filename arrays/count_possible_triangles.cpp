// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr, arr+n);
        
        int count = 0;
        
        for(int c = n-1; c >= 2; c--)
        {
            int a = 0, b = c - 1;
            
            while(a < b)
            {
                if(arr[a] + arr[b] > arr[c])
                {
                    count += b - a;
                    
                    b--;
                }
                else
                {
                    a++;
                }
            }
        }
        return count;
    }
};


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}  // } Driver Code Ends