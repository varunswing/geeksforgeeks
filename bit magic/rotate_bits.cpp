#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {
    	ll n,d,i,ans=0,t;
    	cin>>n>>d;
    	t=n;
    	int x[16]={0},m=0;
    	while(n>0)
    	{
    	    x[m++] = n%2;
    	    n/=2;
    	}
    	d%=16;
    	int arr[16]={0},k=0;
    	for(i=d-1;i>=0;i--)
    	arr[k++] = x[i];
    	for(i=15;i>=d;i--)
    	arr[k++] = x[i];
    	reverse(arr,arr+16);
    	for(i=0;i<16;i++)
    	{
    	    if(arr[i])
    	    ans += (ll)pow(2,i);
    	}
    	cout<<(t<<d)<<"\n"<<ans<<"\n";
    }
	return 0;
}