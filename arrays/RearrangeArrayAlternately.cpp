// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
void rearrange(long long *arr, int n) 
{ 
	
	// Your code here
	int k=0;
	int j=n-1;
	int max = arr[n-1] + 1;
	int min = arr[0];
	for(int i=0; i<n; i++){
	    if(i%2 == 0){
	        arr[i] = (arr[i] + (arr[j]%max)*max);
	        j--;
	    }else{
	        arr[i] = (arr[i] + (arr[k]%max)*max);
	        k++;
	    }
	}
	for(int i=0; i<n; i++){
	    arr[i] = arr[i]/max;
	}
}

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        //calling rearrange() function
        rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends