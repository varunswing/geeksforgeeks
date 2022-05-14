// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:

    bool dfs(vector<vector<char> > &board, string word, vector<vector<bool> > &visited, int row, int col, int idx){
        if(idx == word.length()){
            return true;
        }
        
        if(row >=0 && row < board.size() && col >=0 && col < board[0].size() && visited[row][col] == false && board[row][col] == word[idx]){
            visited[row][col] = true;
            
            if(dfs(board, word, visited, row-1, col-1, idx+1) ||
            dfs(board, word, visited, row-1, col, idx+1) ||
            dfs(board, word, visited, row-1, col+1, idx+1) ||
            dfs(board, word, visited, row, col-1, idx+1) ||
            dfs(board, word, visited, row, col+1, idx+1) ||
            dfs(board, word, visited, row+1, col-1, idx+1) ||
            dfs(board, word, visited, row+1, col, idx+1) ||
            dfs(board, word, visited, row+1, col+1, idx+1))
            return true;
            
            visited[row][col] = false;
        }
        return false;
    }

    bool exists(vector<vector<char> > &board, string word){
        int m = board.size();
        int n = board[0].size();
        
        vector<vector<bool> > visited(m, vector<bool>(n, false));
        
        int idx = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == word[idx]){
                    if(dfs(board, word, visited, i, j, idx) == true){
                        return true;
                    }
                }
            }
        }
        return false;
    }

	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    // Code here
	    vector<string> ans;
	    for(int i=0; i<dictionary.size(); i++){
	        string word = dictionary[i];
	        if(exists(board, word) == true){
	            ans.push_back(word);
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}
  // } Driver Code Ends