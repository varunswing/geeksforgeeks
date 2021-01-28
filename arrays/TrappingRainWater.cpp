// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    // Your code here
    if(n < 3){
        return 0;
    }
    int r = n-1;
    int l = 0;
    int lmax = 0;
    int rmax = 0;
    int ans = 0;
    while(l <= r){
        if(arr[l] <= arr[r]){
            if(lmax < arr[l]) lmax = arr[l];
            else ans+= lmax - arr[l];
            l++;
        }else{
            if(rmax < arr[r]) rmax = arr[r];
            else ans+= rmax - arr[r];
            r--;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends