#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	long long t;
	cin >> t;
	while(t--){
	    long long n;
	    cin >> n;
	    long long arr[n-1], ans = 0;
	    for(long long i=0; i<n-1; i++){
	        cin >> arr[i];
	    }
		long long size = sizeof(arr)/sizeof(arr[0]);

		sort(arr, arr+size);

		for(long long i=0; i<n-1; i++){
			if(arr[i] != i + 1){
				ans = i + 1;
				break;
			}else if(ans == 0){
				ans = n;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}