// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int josephus(int n, int k);

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int find_pos(vector<int> &v,int k,int i){
    if(v.size()==1)
        return v[0];
    i=(i+(k-1))%v.size();
    v.erase(v.begin()+i);
    
    return find_pos(v,k,i);
}

int josephus(int n, int k){
    vector<int> v;
    for(int i=0;i<n;i++) v.push_back(i+1);
    return find_pos(v,k,0);
}