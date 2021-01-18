// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if str1 can be formed from
*   str2 after rotation by 2 places
*/
bool isRotated(string str1, string str2)
{
    // Your code here
    int l1=str1.length(), l2=str2.length(), f=0;
    if(l1==1 && l2==1){
        if(str1==str2){
            f=1;
        }
    }
    string left = str2, right=str2;
    
    rotate(left.begin(), left.begin()+2, left.end());
    rotate(right.begin(), right.end()-2, right.end());
    
    if(left==str1 || right==str1 ||f==1) return 1;
    else return 0;
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		cout<<isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends