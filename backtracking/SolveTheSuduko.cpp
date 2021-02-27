// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends


class Solution {
  public:
    bool isSafe(int grid[N][N], int i, int j, int val){
        for(int k=0; k<N; k++){
            if(grid[i][k] == val || grid[k][j] == val){
                return false;
            }
        }
        int ni = (i/3)*i;
        int nj = (j/3)*j;
        for(int i = 0; i<3; i++){
            for(int j=0; j<3; j++){
                if(grid[i+ni][j+nj] == val){
                    return false;
                }
            }
        }
        return true;
    }
  
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        int i, j;
        for(i=0; i<N; i++){
            bool flag = false;
            for(j=0; j<N; j++){
                if(grid[i][j] == 0){
                    flag = true;
                    break;
                }
            }
            if(flag == true){
                break;
            }
        }
        if(i==N && j==N){
            return true;
        }
        
        for(int val=1; val<=N; val++){
            if(isSafe(grid, i, j, val) == true){
                grid[i][j] = val;
                if(SolveSudoku(grid) == true){
                    return true;
                }
                grid[i][j] = 0;
            }
        }
        return false;
    }
    
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout<< grid[i][j] << " ";
            }
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends