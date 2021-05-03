// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
    bool isright(int a,int b,int n)
    {
        if(a>=0&&a<n&&b>=0&&b<n)
        return 1;
        return 0;
    }
    
    int minimumCostPath(vector<vector<int>>& grid) {
     
        // Your code goes here
        int n = grid.size();
        int dis[n][n];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        dis[i][j]=INT_MAX;
        dis[0][0]=grid[0][0];
        set<pair<int,pair<int,int>>> s;
        s.insert({grid[0][0],{0,0}});
        while(s.size())
        {
            auto it=s.begin();
            pair<int,pair<int,int>> p=*it;
            int d=p.first;
            int i=p.second.first;
            int j=p.second.second;
            s.erase(it);
            for(int k=-1;k<=1;k++)
            for(int l=-1;l<=1;l++)
            {
                int x=i+k;
                int y=j+l;
                if(k!=l&&k!=(-1)*l&&isright(x,y,n))
                {
                    
                    if(d+grid[x][y]>=dis[x][y]) continue;
                    if(dis[x][y]!=INT_MAX)
                    s.erase(s.find({dis[x][y],{x,y}}));
                    dis[x][y] = d+grid[x][y];
                    s.insert({dis[x][y],{x,y}});
                }
            }
        }
        
        return dis[n-1][n-1];
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends