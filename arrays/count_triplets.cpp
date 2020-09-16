#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, i;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n], max_val = 0, ans = 0;
		for(i=0; i<n; i++){
			cin >> arr[i];
		};
		for(i=0; i<n; i++){
			max_val = max(max_val, arr[i]);
		}
		int freq[max_val + 1] = {0};
		for(i=0; i<n; i++){
			freq[arr[i]]++;
		}

		for(i=0; i<n; i++){
			ans += freq[i] * (freq[i] - 1) * (freq[i] - 2) / 6;
		}

		for (int i = 1; i <= max_val; i++)  {
            ans += freq[0] * freq[i] * (freq[i] - 1) / 2; 
		}

		for(i=0; i<n; i++){
			if(2*i <= max_val){
				ans += freq[i] * (freq[i] - 1) / 2 * freq[2*i];
			}
		}

		for(i=0; i<n; i++){
			for(int j=i+1; j+i <= max_val; j++){
				ans += freq[i] * freq[j] * freq[i + j];
			}
		}

		if(ans == 0){
			cout << -1 << endl;
		}else{
			cout << ans << endl;
		}
	}

	return 0;
}