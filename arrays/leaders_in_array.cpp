// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




vector<int> leaders(int a[], int n){
    // code here
    int max = INT_MIN;
    vector<int> ans;
    for(int i=n-1; i>=0; i--){
        if(max <= a[i]){
            max = a[i];
            ans.push_back(max);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        //calling leaders() function
        vector<int> v = leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends