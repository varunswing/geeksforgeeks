#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
    int t, n;
    cin >> t;
    while(t--){
        int sum = 0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int max_val = arr[0];
        for(int i=0; i<n-1; i++){
            sum = arr[i];
            max_val = max(sum, max_val);
            for(int j=i+1; j<n; j++){
                sum += arr[j];
                max_val = max(sum, max_val);
            }
        }

        cout << max_val << endl;
    }

	return 0;
}