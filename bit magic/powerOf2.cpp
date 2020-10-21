#include <bits/stdc++.h>
using namespace std;
#define bool int 
 
bool isPowerOfTwo (long long int x) 
{ 
    return x && (!(x&(x-1))); 
} 
 
/*Driver code*/
int main() 
{ 
    int t;
	cin >> t;
	while(t--){
	    long long int n;
	    cin >> n;
	    isPowerOfTwo(n)? cout<<"YES\n": cout<<"NO\n"; 
	}
    return 0; 
} 
 