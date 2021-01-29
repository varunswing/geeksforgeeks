// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    int min = arr[0];
    int max = arr[n-1];
    for(int i=1; i<n-1; i++){
        int j = 0;
        int k = n-1;
        int flag = 0;
        while(j<i){
            if(arr[i] >= arr[j]){
                j++;
            }else{
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            while(k>i){
                if(arr[i] <= arr[k]){
                    k--;
                }else{
                    break;
                }
            }
            if(k == i){
                return arr[i];
            }
        }
    }
    return -1;
}