// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:  
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(A[0][0]==0) return -1;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        queue<pair<int, int>> q;
        q.push({0,0});
        int count=0;
        A[0][0]=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                pair<int, int> p=q.front();
                q.pop();
                int i=p.first;
                int j=p.second;
                if(i==X&&j==Y) return count;
                for(int d=0; d<4; d++){
                    int x=i+dx[d];
                    int y=j+dy[d];
                    if(x>=0&&y>=0&&x<N&&y<M&&A[x][y]==1){
                        A[x][y]=0;
                        q.push({x,y});
                    }
                }
            }
            count++;
        }
       
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}  // } Driver Code Ends