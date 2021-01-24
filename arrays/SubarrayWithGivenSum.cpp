// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int arr[], int n, int s){
    
    // Your code here
    int left = 0, right = 0, sum = 0;
    vector<int> ans;
    ans.push_back(-1);
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == s){
            ans.pop_back();
            ans.push_back(left+1);
            ans.push_back(i+1);
            return ans;
        }else if(sum > s){
            sum -= arr[left++] + arr[i--];
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends