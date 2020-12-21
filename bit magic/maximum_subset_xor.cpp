// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Number of bits to represent int
#define INT_BITS 32
int maxSubarrayXOR(int [], int n);
int main()
{

    int t,n,a[100004],k;
    scanf("%d",&t);
    while(t--)
    {
        //cin>>n;
      scanf("%d",&n);

        for(int i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
            }


   
printf("%d\n",maxSubarrayXOR(a,n));
       // cout<<bin(a,0,n-1,k)<<endl;


    }
}// } Driver Code Ends


// Function to return maximum XOR subset in set[]
int solve(int A[] , int n ,int val){
    if(n==0)
        return val;
    int t = solve(A,n-1,val^A[n-1]);
    int p = solve(A,n-1,val);
    return max(t,p);
}int maxSubarrayXOR(int A[], int n){
    return solve(A,n,0);
}