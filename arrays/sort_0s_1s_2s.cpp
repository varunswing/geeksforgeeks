#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n], z=0, o=0, t=0;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    for(int i=0; i<n; i++){
	        if(arr[i] == 0)z++;
	        if(arr[i] == 2)t++;
	        if(arr[i] == 1)o++;
	    }
	    for(int i=0; i<z; i++){
	        cout << 0 << " ";
	    }
	    for(int i=z; i<z+o; i++){
	        cout << 1 << " ";
	    }
	    for(int i=z+o; i<z+o+t; i++){
	        cout << 2 << " ";
	    }
	    cout << endl;
	}
	
	return 0;
}