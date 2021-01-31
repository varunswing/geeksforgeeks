// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, int arr[])
    {
        // code here
        sort(arr, arr+N);
        int sum = 0;
        int count = 0;
        for(int i=0; i<N; i++){
            sum += arr[i];
            if(sum > K){
                return count;
            }
            count++;
        }
        return count;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends