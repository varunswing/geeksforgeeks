// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
vector <int> dfs(vector<int> g[], int N)
{
    // Your code here
    vector<int> ans;
    stack<int> s;
    vector<bool> visited(N);
    if(N){
        s.push(0);
    }
    while(s.size()){
        int node = s.top();
        s.pop();
        if(visited[node]) continue;
        ans.push_back(node);
        visited[node] = 1;
        
        for(int i = g[node].size()-1; i>=0; i--){
            if(!visited[g[node][i]]){
                s.push(g[node][i]);
            }
        }
    }
    return ans;

}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];

        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  // } Driver Code Ends