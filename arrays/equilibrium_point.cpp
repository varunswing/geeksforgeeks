#include <bits/stdc++.h>
using namespace std;

int main() {
	//
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n], sum[n], s = 0;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
        for(int i=0; i<n; i++){
            s += arr[i];
	        sum[i] = s;
	    }
	    long bef=0, aft=0;
        int ans = -1;
	    if(n > 1){
	        for(int i=0; i<n; i++){
	            if(i > 0 && i < n-1){
                    aft = sum[n-1] - sum[i];
                    bef = sum[i-1];
                    if(aft == bef && aft > 0){
                        ans = i + 1;
                        break;
                    }
	            }else if(i == 0){
                    aft = sum[n-1];
                    if(aft == bef && aft > 0){
                        ans = i + 1;
                        break;
                    }
	            }else if(i == n-1){
                    bef = sum[i-1];
                    if(aft == bef && aft > 0){
                        ans = i + 1;
                        break;
                    }
	            }
                aft = 0, bef = 0;
            }
        }else if(n == 1){
            ans = 1;
        }
        cout << ans << endl;
	}
	
	return 0;
}