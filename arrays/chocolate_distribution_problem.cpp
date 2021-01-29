#include<bits/stdc++.h>
using namespace std;

int distribute(int arr[], int k, int n){
    sort(arr, arr+n);
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(k+i-1 < n ){
            if((arr[k+i-1] - arr[i]) < min){
                min = arr[k+i-1] - arr[i];
            }
        }else{
            return min; 
        }
    }
    return min;
}

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
        int k;
        cin >> k;
        cout << distribute(arr, k, n) << endl;
    }
	return 0;
}