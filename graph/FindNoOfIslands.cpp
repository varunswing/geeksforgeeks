// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void mark(int rows, int cols, int i, int j, vector<vector<char>>& grid){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j] != '1'){
            return;
        }
        
        grid[i][j] = '2';
        mark(rows, cols, i+1, j, grid);
        mark(rows, cols, i-1, j, grid);
        mark(rows, cols, i, j+1, grid);
        mark(rows, cols, i, j-1, grid);
        mark(rows, cols, i-1, j-1, grid);
        mark(rows, cols, i+1, j+1, grid);
        mark(rows, cols, i+1, j-1, grid);
        mark(rows, cols, i-1, j+1, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int rows = grid.size();
        int cols = grid[0].size();
        if(rows == 0){
            return 0;
        }
        int is = 0;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j] == '1'){
                    mark(rows, cols, i, j, grid);
                    is++;
                }
            }
        }
        return is;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.numIslands(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends