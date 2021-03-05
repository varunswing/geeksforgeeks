// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        if(n & 1 != 0){
            return false;
        }
        map<int, int> m;
        for(int i=0; i<n; i++){
            m[nums[i]%k]++;
        }
        for(int i=0; i<n; i++){
            int a = m[nums[i]%k]&1;
            if(nums[i]%k == 0){
                if(m[nums[i]%k]%2 == 0){
                    continue;
                }else{
                    return false;
                    break;
                }
            }else if(m[nums[i]%k] == m[k-(nums[i]%k)]){
                continue;
            }else{
                return false;
                break;
            }
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends