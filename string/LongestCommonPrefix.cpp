#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& prefix, string min_string, int n){
    string ans = "";
    for(int i=0; i<min_string.length(); i++){
        for(int j=0; j<n; j++){
            string curr = prefix[j];
            if(curr[i] != min_string[i]){
                return ans;
            }
        }
        ans += min_string[i];
    }
    return ans;
}

int main(){
	//code
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> prefix(n);
        int min_length = INT_MAX;
        string min_string;
        for(int i=0; i<n; i++){
            cin >> prefix[i];
            if(prefix[i].length() < min_length){
                min_string = prefix[i];
                min_length = prefix[i].length();
            }
        }
        string result = longestCommonPrefix(prefix, min_string, n);
        if(result.empty()) cout << -1 << endl;
        else cout << result << endl;
        
    }
	return 0;
}