// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


//User function Template for C++

class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        sort(arr, arr+N);
        int ans;
        for(int i=0; i<N; i+=2){
            if(i+1 < N){
                if(arr[i] != arr[i+1]){
                    ans = arr[i];
                    break;
                }
            }else if(i+1 == N){
                ans = arr[N-1];
                break;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.findSingle(N, arr) << endl;
    }
    return 0; 
}   // } Driver Code Ends