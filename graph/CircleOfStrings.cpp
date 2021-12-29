// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    int isCircle(int N, vector<string> A)
    {
        vector<int> adj[26];
        vector<int> in(26, 0);
        vector<int> out(26, 0);
        for(int i=0; i<N; i++) {
            int ch1 = A[i][0]-'a';
            int ch2 = A[i].back()-'a';
            adj[ch1].push_back(ch2);
            out[ch1]++;
            in[ch2]++;
        }
        for(int i=0; i<26; i++) {
            if(in[i]!=out[i]) return 0;
        }
        int src;
        for(int i=0; i<26; i++) {
            if(out[i]) {
                src = i;
                break;
            }
        }
        vector<int> vis(26, 0);
        dfs(adj, vis, src);
        for(int i=0; i<26; i++) {
            if(out[i] && !vis[i]) 
                return 0;
        }
        return 1;
    }
    void dfs(vector<int> adj[], vector<int>& vis, int s) {
        vis[s] = 1;
        for(auto& it: adj[s]) {
            if(!vis[it]) {
                dfs(adj, vis, it);
            }
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<string> A;
        string s;
        
        for(int i = 0;i < N; i++)
        {
            cin>>s;
            A.push_back(s);
        }
        
        Solution ob;
        cout<<ob.isCircle(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends