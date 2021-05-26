// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	vector<int> order;
	
	void dfs(int src, vector<int> &vis, vector<int> g[]){
	    vis[src] = 1;
	    for(auto x:g[src]){
	        if(!vis[x]){
	            dfs(x, vis, g);
	        }
	    }
	    order.push_back(src);
	}
	
	void rdfs(int src, vector<int> &vis1, vector<int> rev[]){
	    vis1[src] = 1;
	    for(auto x:rev[src]){
	        if(!vis1[x]){
	            rdfs(x, vis1, rev);
	        }
	    }
	}
	
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        order.clear();
        vector<int> rev[V];
        for(int y=0; y<V; y++){
            for(auto x:adj[y]){
                rev[x].push_back(y); 
            }
        }
        vector<int> vis(V, 0);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                dfs(i, vis, adj);
            }
        }
        
        vector<int> vis1(V, 0);
        int count = 0;
        for(int i=V-1; i>=0; i--){
            if(!vis1[order[i]]){
                rdfs(order[i], vis1, rev);
                count++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends