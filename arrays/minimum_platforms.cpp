#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimumPlatforms(int *a,int *d,int n)
{
    multimap<int,int> m;
    for(int i=0;i<n;i++)
    {
        m.insert({a[i],d[i]});
    }
    int k=0;
    for(auto i=m.begin();i!=m.end();i++)
    {
        a[k]=i->first;
        d[k]=i->second;
        k++;
    }
    /*sort(a,a+n);
    sort(d,d+n);* Execution Time : 0.11 */
    int pf=1,c,j;
    for(int i=1;i<n;i++)
    {
        j=0,c=1;
        while(j<i)
        {
            if(a[j]<=a[i]&&a[i]<=d[j]) c++;
            j++;
        }
        if(pf<c) pf = c;
    }
    return pf;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],d[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        cin>>d[j];
	    }
	    cout<<minimumPlatforms(a,d,n)<<endl;
	}
	return 0;
}