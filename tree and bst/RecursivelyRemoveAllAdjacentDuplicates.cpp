#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    
    while(t--)
    {
        cin>>s;
        string s2;
        
        while(1){
            int flg=1;
            s2="";
            for(int i=0;i<s.length();i++){ 
                if(s[i]==s[i+1]){
                    flg=0;
                }else if(i>0&&s[i]==s[i-1]){
                    flg=0;
                    
                }else{
                    s2+=s[i];
                }
            }
            s=s2;
            if(flg==1)
                break;
        }
        cout<<s2<<endl; 
    }
    return 0;
}