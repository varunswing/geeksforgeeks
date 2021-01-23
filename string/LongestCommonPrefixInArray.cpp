// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution{
    public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here  
        int min = INT_MAX;
        for(int i=0; i<N; i++){
            if(arr[i].size() < min){
                min = arr[i].size();
            }
        }
  
        string ans; 
        char current;  
      
        for (int i=0; i<min; i++){  
            current = arr[0][i]; 
      
            for (int j=1 ; j<N; j++) 
                if (arr[j][i] != current) {
                    if(i==0){
                        ans.push_back('-');
                        ans.push_back('1');
                        return ans;
                    }
                    return ans; 
                }
            ans.push_back(current); 
        } 
      
        return ans; 
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends