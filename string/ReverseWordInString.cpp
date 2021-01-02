// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s);
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout<<reverseWords(s)<<endl;
    }
}// } Driver Code Ends


string reverseWords(string S) 
{ 
    // code here 
    string str = "";
    string word = "";
    string result = "";
    for(int i=0; S[i]!='\0'; i++){
        if(S[i] == '.'){
            word = S[i] + str;
            str = "";
        }else{
            str += S[i];
        }
        result = word + result;
        word = "";
    }
    if(str != ""){
        result = str + result;
    }
    return result; 
}