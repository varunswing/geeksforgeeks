// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool dfs(vector<vector<int>>&grid,int i,int j){
        int n = grid.size(), m=grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0){
           return false;
        }
        if(grid[i][j]==2){
            return true;   
        } 
        int x = grid[i][j];
        
        grid[i][j]=0;
        
        return(dfs(grid,i+1,j) || dfs(grid,i-1,j) || dfs(grid,i,j+1) || dfs(grid,i,j-1));
   }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    return dfs(grid, i, j);
                    break;
                }
            }
        }
        return 0;
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
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends