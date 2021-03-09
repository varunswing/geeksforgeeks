// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minDiffernce(int arr[], int n) 
	{ 
	    // Your code goes here
	    int s=0 ;
	    
        for(int i=0; i<n; i++ ){
            s+=arr[i]; 
        }
        bool t[n+1][s+1]; 
        for(int j=0; j<=s; j++){
            t[0][j]=false; 
        }
        for(int i=0; i<=n; i++){
            t[i][0]=true;
        }
        for(int i=1; i<=n; i++){ 
            for(int j=1; j<=s; j++ ) { 
                if(arr[i-1] <= j){
                    t[i][j]=t[i-1][j] | t[i-1][j-arr[i-1]] ;  
                }else{ 
                    t[i][j]=t[i-1][j]; 
                } 
                
            }
        }
        int i; 
        for(i=s/2; i>=0; i-- )
        {
            if(t[n][i]){
                break;
            }
        }
        return s-2*i ;
	}
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDiffernce(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends