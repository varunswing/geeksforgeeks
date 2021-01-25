// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 
 // } Driver Code Ends


 

// Function to count number of pairs such that x^y is greater than y^x
// X[], Y[]: input arrau
// m, n: size of arrays X[] and Y[] respectively
int getIndex(int Y[] , int n , int ele){
    
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(Y[mid] > ele){
            ans = mid;
            high = mid -1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

long long countPairs(int X[], int Y[], int m, int n)
{
   //Your code here
    int zero = 0, one = 0, three = 0, four = 0, two= 0;
    sort(X, X+m);
    sort(Y, Y+n);
    
    for(int i=0;i<n;i++){
        if(Y[i]==0)zero++;
        if(Y[i]==1)one++;
        if(Y[i]==3)three++;
        if(Y[i]==4)four ++;
        if(Y[i]==2)two++;
    }
    
    //traversing x elements
    long long ans = 0;
    for(int i=0;i<m;i++){
        if(X[i]==0){
            continue;
        }
        else if(X[i]==1){
           ans += zero; 
        }
        else if(X[i]==2){
            int index = getIndex(Y , n , 2);
            if(index != -1){
                ans += n - index;
            }
            ans -= three;
            ans -= four;
            ans += one + zero;
        }
        else{
            int index = getIndex(Y , n , X[i]);
            if(index!=-1){
                ans+=n-index;
            }
            ans += one + zero;
            if(X[i]==3){
                ans+=two;
            }
        }
    }
    return ans;
}


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		cout<<countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends