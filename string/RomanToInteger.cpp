// { Driver Code Starts
// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}// } Driver Code Ends


// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &str) {
    // code here
    if(!str.size()){
        return 0;
    }
    map<char, int> m;
    m.insert(pair<char, int>('I', 1));
    m.insert(pair<char, int>('V', 5));
    m.insert(pair<char, int>('X', 10));
    m.insert(pair<char, int>('L', 50));
    m.insert(pair<char, int>('C', 100));
    m.insert(pair<char, int>('D', 500));
    m.insert(pair<char, int>('M', 1000));
    int ans = 0, p = 0;
    for(int i=0; i<str.size(); i++){
        if(m[str[i]] > m[str[i-1]] && (i-1 >= 0)){
            ans += (m[str[i]] - 2*m[str[i-1]]);
        }else{
            ans += m[str[i]];
        }
    }
    return ans;
}