// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector <int> bfs(vector<int> g[], int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}// } Driver Code Ends


/* You have to complete this function*/

/* Function to do BFS of graph
*  g[]: adj list of the graph
*  N : number of vertices
*/
vector <int> bfs(vector<int> g[], int N) {

    // Your code here
    queue<int> queue;
    vector<int> ans;
    vector<bool> visited(N);
    
    if(N){
        queue.push(0);
    }
    while(queue.size()){
        int node = queue.front();
        queue.pop();
        if(visited[node]){
            continue;
        }
        visited[node] = true;
        ans.push_back(node);
        for(int i=0; i<g[node].size(); i++){
            if(!visited[g[node][i]]){
                queue.push(g[node][i]);
            }
        }
    }
    return ans;
}