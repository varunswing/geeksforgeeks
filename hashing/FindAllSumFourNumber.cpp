// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > fourSum(vector<int> &a, int k);

// Position this line where user code will be pasted.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int> > ans = fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

// arr[] : int input array of integers
// k : the quadruple sum required
vector<vector<int> > fourSum(vector<int> &arr, int k) {

    if(arr.size() < 4){
        return {{}};
    }
    int n = arr.size();
    vector<vector<int>> v;
    long long sumA,sumB;
    sort(arr.begin(),arr.end());
    int left,right;
    for(int i = 0 ; i < n-3 ; i++)
    {
        if(i > 0 && arr[i] == arr[i-1]){
            continue;
        }
        for(int j = i+1 ; j < n-2; j++){
            if(j > i+1 && arr[j] == arr[j-1]){
                continue;
            }
            sumA = arr[i]+arr[j];
            left = j+1;
            right = n-1;
            while(left < right){
                sumB = sumA + arr[left]+arr[right];
                if(sumB == k){
                    v.push_back({arr[i],arr[j],arr[left],arr[right]});
                    left++;
                    right--;
                    while(left < right && arr[left] == arr[left-1]){
                        left++;
                    }
                    while(left < right && arr[right] == arr[right+1]){
                        right--;
                    }
                }
                else if(sumB < k){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
    }
    return v;
}