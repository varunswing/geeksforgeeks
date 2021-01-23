// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method */
int atoi(string str)
{
    //Your code here
    int i=0, ans = 0, flag = 1;
    if(str[0] == '-'){
        i = 1;
        flag = -1;
    }
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            ans = ans*10 + (str[i++] - '0');
        }else{
            return -1;
        }
    }
    return ans*flag;
}