#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin >> t;
    int n;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int size = sizeof(arr)/sizeof(arr[0]);

        sort(arr, arr+size);

        if(n%2 == 0){
            for(int i=0; i<n/2; i++){
                cout << arr[n-i-1] << " " << arr[i] << " ";
            }
        }else{
            for(int i=0; i<=n/2; i++){
                if( i != n/2){
                    cout << arr[n-i-1] << " " << arr[i] << " ";
                }else{
                    cout << arr[i] << " " ;
                }
            }
        }
        cout << endl;
    }
	
	return 0;
}