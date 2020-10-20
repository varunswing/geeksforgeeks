// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	void merge(int a[], int b[], int n, int m) {
	    // code here
	    int c=n,sr=0,i=0,j=0;
	    while(c-- && i<n && j<m)
	    {
	        if(a[i]<b[j])
	        i++;
	        else if(a[i]>=b[j])
	        {
	            sr++;
	            j++;
	        }
	        
	    }
	    for(i=0;i<sr;i++)
	    swap(b[i],a[n-i-1]);
	    sort(a,a+n);
	    sort(b,b+m); 
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends