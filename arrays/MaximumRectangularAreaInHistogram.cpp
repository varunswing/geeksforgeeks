// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    long long getMaxArea(long long arr[], int n)
    {
        
        stack<int> st;
        vector<int > left(n),right(n); 
   
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }

            if(st.empty()){
                left[i]=0;
            }else{
                left[i]=st.top()+1;
            }
            st.push(i);  
        }
        
 
        if(!st.empty()){
            while(!st.empty()){
                st.pop();
            }
        }

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n-1;
            }else{
                right[i]= st.top()-1;
            }
            st.push(i);
            
        }
        

        long long int  res=0;
        for(int i=0;i<n;i++){
            if(res<arr[i]*((right[i]-left[i])+1)){
                res = arr[i]*((right[i]-left[i])+1);
            } 
        }
        
        return res;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends