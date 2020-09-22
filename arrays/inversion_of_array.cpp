#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll query(ll bit[],ll pos){
    ll sum=0;
    while(pos>0){
        sum+=bit[pos];
        pos-=pos&(-pos);
    }
    return sum;
}

void update(ll bit[],ll n,ll pos){
    while(pos<=n){
        bit[pos]+=1;
        pos+=pos&(-pos);
    }
}

int main()
 {
	ll t;
	cin>>t;
	while(t--){
	    ll n,i,summ=0;
	    cin>>n;
	    ll a[n],temp[n],bit[n+1]={0};
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        temp[i]=a[i];
	    }
	    sort(temp,temp+n);
	    for(i=0;i<n;i++){
	       a[i]=lower_bound(temp,temp+n,a[i])-temp+1; 
	    }
	    for(i=n-1;i>=0;i--){
	        summ+=query(bit,a[i]-1);
	        update(bit,n,a[i]);
	    }
	    cout<<summ<<endl;
    }
	return 0;
}