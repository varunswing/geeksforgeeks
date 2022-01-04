// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string str){
        // code here
        stack<int> ins;
        stack<string> ss;
        string result = "";
        int i = 0;
        while(i < str.length()){
            int k = 0;
            if(isdigit(str[i])){
                while(i < str.length() && isdigit(str[i])){
                    k = k*10 + str[i] - '0';
                    i++;
                }
                ins.push(k);
            }else if(str[i] == ']'){
                string s = ss.top();
                ss.pop();
                int n = ins.top();
                ins.pop();
                for(int i=0; i<n; i++){
                    s += result;
                }
                result = s;
                i++;
            }else if(str[i] == '['){
                ss.push(result);
                result = "";
                i++;
            }else{
                result += str[i];
                i++;
            }
        }
        return result;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends