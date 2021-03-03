// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        int sumA=0, sumB=0, sum=0;
        map<int, int> m1;
        map<int, int> m2;
        for(int i=0; i<n; i++){
            sumA += A[i];
            m1[A[i]]++;
        }
        for(int i=0; i<m; i++){
            sumB += B[i];
            m2[B[i]]++;
        }
        if(sumA==sumB){
            for(int i=0; i<n; i++){
                if(m1[A[i]] > 0 && m2[A[i]] > 0 ){
                    return 1;
                }
            }
            return -1;
        }else if(sumA>sumB){
            sum = (sumA-sumB);
            if(sum&1 != 0){
                return -1;
            }
            for(int i=0; i<n; i++){
                if(m2[A[i]-(sum/2)] > 0){
                    return 1;
                }
            }
        }else{
            sum = (sumB-sumA);
            if(sum&1 != 0){
                return -1;
            }
            for(int i=0; i<m; i++){
                if(m1[B[i]-sum/2]){
                    return 1;
                }
            }
        }
        return -1;
	}
};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends