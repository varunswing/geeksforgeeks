// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//User function template for C++

class Solution{   
public: 
    int getindex(int Y[] , int n , int ele){
        
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(Y[mid] >ele){
                ans = mid;
                high  =mid -1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }

    long long countPairs(int X[], int Y[], int m, int n) {

        int zeros = 0,one = 0 , three = 0 , four = 0,two= 0;
        sort(X, X+m);
        sort(Y, Y+n);
        
        for(int i  =0;i<n;i++){
            if(Y[i]==0)zeros++;
            if(Y[i]==1)one++;
            if(Y[i]==3)three++;
            if(Y[i]==4)four++;
            if(Y[i]==2)two++;
        }
        
        //traversing X elements
        long ans = 0;
        for(int i =0;i<m;i++){
            if(X[i]==0){
                continue;
            }
            else if(X[i]==1){
               ans +=zeros; 
            }
            else if(X[i]==2){
                int index = getindex(Y , n , 2);
                if(index != -1){
                    ans += n - index;
                }
                ans -=three;
                ans -=four;
                ans += one +zeros;
            }
            else{
                int index = getindex(Y , n , X[i]);
                if(index!=-1){
                    ans+=n-index;
                }
                ans += one +zeros;
                if(X[i]==3){
                    ans+=two;
                }
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int X[m], Y[n];
        for (int i = 0; i < m; i++) {
            cin >> X[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> Y[i];
        }
        Solution ob;
        auto ans = ob.countPairs(X, Y, m, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends