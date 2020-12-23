// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort (arr, arr + n); // sorting the array
        	int i = 0, j = n - 1;
        	int sum = arr[i] + arr[j]; // initializing sum
        	int diff = abs (sum); // initializing the result
        
        	while (i < j)
        	{
        	    // if we have zero sum, there's no result better. Hence, we return
        		if (arr[i] + arr[j] == 0) 
        			return 0;
        			
        		// if we get a better result, we update the difference
        		if (abs (arr[i] + arr[j]) < abs (diff))
        		{
        			diff = (arr[i] + arr[j]);
        			sum = arr[i] + arr[j];
        		}
                
                // if the current sum is greater than zero, we search for a smaller sum
        		if (arr[i] + arr[j] > 0)
        			j--;
        		// else, we search for a larger sum
        		else
        			i++;
        	}
        	return sum;
        }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends