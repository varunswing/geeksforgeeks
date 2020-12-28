// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


/* This function is used to detect a cycle in undirected graph

*  g[]: array of vectors to represent graph
*  V: number of vertices
*/
bool isCyclicUtil(vector<int> g[], int curr, vector<bool> &visited, int parent){
    visited[curr] = true;
    for(auto i:g[curr]){
        if(!visited[i]){
            if(isCyclicUtil(g, i, visited, curr)){
                return true;
            }
       }else if(i != parent || i == curr){
           return true;
       }
    }
    return false;
}

bool isCyclic(vector<int> g[], int V)
{
   // Your code here
   vector<bool> visited(V);
   for(int i=0; i<V; i++){
       if(!visited[i] && isCyclicUtil(g, i, visited, -1)){
            return true;
       }
   }
   return false;
   
}

// { Driver Code Starts.


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends