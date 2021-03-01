// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(vector<vector<int>> &m, int i, int j, int n, vector<string> &v, string s){
        if(i>n-1 || j>n-1 || i<0 || j<0 || m[i][j] == 0){
            return;
        }
        if(i==n-1 && j==n-1){
            v.push_back(s);
        }
        m[i][j] = 0;
        solve(m, i+1, j, n, v, s+"D");
        solve(m, i, j+1, n, v, s+"R");
        solve(m, i-1, j, n, v, s+"U");
        solve(m, i, j-1, n, v, s+"L");
        m[i][j] = 1;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> v;
        string s;
        solve(m, 0, 0, n, v, s);
        sort(v.begin(), v.end());
        return v;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends