// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	
	void topo_sort(vector<int>adj[],int V,bool visited[],int s,stack<int>&st)
    {
        visited[s]=true;
        for(auto x:adj[s])
        {
            if(visited[x]==false)
            topo_sort(adj,V,visited,x,st);
        }
        st.push(s);
    }
    
    void topo(vector<int>adj[],int V,stack<int>&st)
    {
   
        bool visited[V]={false};
        for(int i=0;i<V;i++)
        {
            if(visited[i]==false)
            {
                topo_sort(adj,V,visited,i,st);  
            }
        }
    }
    void reverse(vector<int>adj[],int V,vector<int>transpose[])
    {
       for(int i=0;i<V;i++)
        {
            for(auto x:adj[i]){
                transpose[x].push_back(i);
            }
        }
    }

    void helper(vector<int>transpose[],int V,bool visited2[],int s)
    {
        visited2[s]=true;
        for(auto x:transpose[s])
        {
            if(visited2[x]==false)
            helper(transpose,V,visited2,x);
        }
    }


   int kosaraju(int V, vector<int> adj[])
    {
        stack<int>st;
        topo(adj,V,st);
      
      
        int topo_arr[V];
        int i=0;
        while(st.empty()==false)
        {       
            int u=st.top();
            st.pop();
            topo_arr[i++]=u;
        }
      
        vector<int>transpose[V];
        reverse(adj,V,transpose);
        
        bool visited2[V]={false};
        int count=0;
        for(int i=0;i<V;i++)
        {   
            int val=topo_arr[i];
            if(visited2[val]==false)
            {
                count++;
                helper(transpose,V,visited2,val);
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