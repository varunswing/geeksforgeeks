#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n], k;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    int ans = -1;
	    cin >> k;
	    for(int i=0; i<n; i++){
	        if(arr[i] == k){
	            ans = i;
	            break;
            }
	    }
	    cout << ans << endl;
	}
	
	return 0;
	
}