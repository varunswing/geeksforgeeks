// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if two strings are anagram
*   a, b: input string
*/
bool isAnagram(string a, string b){
    // Your code here
    if(a.size() != b.size()){
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    // map<char, int> m1;
    // map<char, int> m2;
    // for(int i=0; i<a.size(); i++){
    //     m1[a[i]]++;
    //     m2[b[i]]++;
    // }
    // if(m1.size() != m2.size()){
    //     return false;
    // }
    // for(int i=0; i<a.size(); i++){
    //     if(m1[a[i]] == m2[a[i]]){
    //         continue;
    //     }else{
    //         return false;
    //     }
    // }
    return true;
}


// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends