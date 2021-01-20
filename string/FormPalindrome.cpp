#include <bits/stdc++.h>
using namespace std;

int lcs(string s, int x){
    string t = s;
    reverse(t.begin(), t.end());
    int y = t.length();
    int dp[x+1][y+1];
    for(int i=0;i<=x;i++)
        dp[i][0] = 0;
    for(int j=0;j<=y;j++)
        dp[0][j] = 0;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(s[i-1] == t[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[x][y];
}

int minInsertions(string s, int n){
    int x = lcs(s, n);
    return n-x;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        cout<<minInsertions(s, n)<<endl;  
    }  
    return  0;  
}