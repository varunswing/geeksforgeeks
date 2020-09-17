#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, i;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n], ans = 0;
		for(i=0; i<n; i++){
			cin >> arr[i];
		};
		
		sort(arr, arr+n);

		for(i=n-1; i>=0; i--){
			int j = 0;
			int k = i-1;
			while(k > j){
				if(arr[i] == arr[j] + arr[k]){
					ans ++;
					j++;
					k--;
				}else if(arr[i] > arr[j] + arr[k]){
					j++;
				}else{
					k--;
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}