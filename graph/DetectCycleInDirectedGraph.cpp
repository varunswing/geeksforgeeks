// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


/* This function is used to detect a cycle in undirected graph

*  g[]: array of vectors to represent graph
*  V: number of vertices
*/
bool isCyclicUtil(int i, int V, vector<int> adj[],bool visited[], bool inTheCall[])
{
    visited[i]=true;
    inTheCall[i]=true;
    for(int j=0;j<adj[i].size();j++){ 
        if(!visited[adj[i][j]] && isCyclicUtil(adj[i][j],V,adj,visited,inTheCall)){
            return true;
        }else{
            if(inTheCall[adj[i][j]])
                return true;
        }
    }
    
    inTheCall[i]=false;
    return false;
}
bool isCyclic(vector<int> adj[], int V)
{
    bool visited[V];
    bool inTheCall[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
        inTheCall[i]=false;
    }
    for(int i=0;i<V;i++){  
        if(!visited[i]){
            if(isCyclicUtil(i,V,adj,visited,inTheCall))
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