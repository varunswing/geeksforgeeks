// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int search(int A[], int l, int h, int key);

 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        cout << search(A, 0, n - 1, key) << endl;
    }
return 0;
}// } Driver Code Ends


int search(int A[], int l, int h, int key){
    //complete the function here
    for(int i=l; i<=h; i++){
        if(A[i] == key){
            return i;
        }
    }
    return -1;
}