// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    // Your code here
    stack<char> st;
    int result = 1;
    for(int i=0; i<x.size(); i++){
        if(x[i] == '{' || x[i] ==  '[' || x[i] ==  '('){
            st.push(x[i]);
        }else if(st.empty()){
            result = 0;
            break;
        }else if(x[i] == '}'){
            if(st.top() != '{'){
                result = 0;
                break;
            }else{
                st.pop();
            }
        }else if(x[i] == ')'){
            if(st.top() != '('){
                result = 0;
                break;
            }else{
                st.pop();
            }
        }else if(x[i] == ']'){
            if(st.top() != '['){
                result = 0;
                break;
            }else{
                st.pop();
            }
        }
    }

    if(!st.empty()){
        result = 0;
    }
    
    return result;
    
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends