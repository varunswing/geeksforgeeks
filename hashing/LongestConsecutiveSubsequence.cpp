// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    // return the length of the longest subsequene of consecutive integers
    int findLongestConseqSubseq(int arr[], int N)
    {
        //Your code here
        if(N==1){
          return 1;
        }
        int m = 0, count = 1;
        sort(arr, arr+N);
        for(int i=1; i<N; i++){
            if(1 + arr[i-1] == arr[i]){
                count++;
            }else if(arr[i-1] == arr[i]){
                continue;
            }else{
                count = 1;
            }
            m = max(count, m);
        }
        return m;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends