#include <bits/stdc++.h>
using namespace std;

void floodFill(vector<vector<int>> &vs,int n,int m,int x,int y,int val,int k){
    if(x<0 || x>=n || y<0 || y>=m)
        return;
    if(vs[x][y]!=val)
        return;
        
    vs[x][y] = k;
    floodFill(vs,n,m,x+1,y,val,k);
    floodFill(vs,n,m,x,y+1,val,k);
    floodFill(vs,n,m,x-1,y,val,k);
    floodFill(vs,n,m,x,y-1,val,k);
}

int main()
 {
	//code
	int t,n,m,x,y,k,a;
	cin >> t;
	while(t--){
	    cin >> n >> m;
	    vector<vector<int>>vs;
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin >> a;
	            v.push_back(a);
	        }
	        vs.push_back(v);
	        v.clear();
	    }
	    cin >> x >> y >> k;
	    int val = vs[x][y];
	    
	    floodFill(vs,n,m,x,y,val,k);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++)
	            cout << vs[i][j] << " ";
	    }
        cout << endl;
	}
	return 0;
}