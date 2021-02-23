#include<bits/stdc++.h>
using namespace std;

int main(){
	//code
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    	    cin >> arr[i];
    	}
    	sort(arr, arr+n);
    	map<int, int> m;
    	for(int i=0; i<n; i++){
    	    m[arr[i]]++;
    	}
    	vector<vector<int>> v(n);
    	for(auto x: m){
    	    v[x.second].push_back(x.first);
    	}
    	for(int i=n-1; i>=0; i--){
    	    if(v.size() != 0){
    	        for(auto x: v[i]){
    	            for(int count = 1; count <= i; count++){
    	                cout << x << " ";
    	            }
    	        }
    	    }
    	}
    	cout << endl;
    }
	return 0;
}