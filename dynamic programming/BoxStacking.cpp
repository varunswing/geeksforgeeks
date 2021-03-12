// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int maxHeight(int height[],int width[],int length[],int n);

int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	

 	int A[1000],B[1000],C[10001];
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		A[i]=a;
		B[i]=b;
		C[i]=c;
	}
	cout<<maxHeight(A,B,C,n)<<endl;
}
 
} // } Driver Code Ends


/*The function takes an array of heights, width and 
length as its 3 arguments where each index i value 
determines the height, width, length of the ith box. 
Here n is the total no of boxes.*/
int maxHeight(int height[],int width[],int length[],int n)
{
    //Your code here
    vector<pair<pair<int, int>, pair<int, int>>> v;
    
    for(int i=0; i<n; i++){
        v.push_back({ {width[i]*length[i], height[i]}, {width[i], length[i]} });
        v.push_back({ {height[i]*length[i], width[i]}, {height[i], length[i]} });
        v.push_back({ {width[i]*height[i], length[i]}, {width[i], height[i]} });
    }
    sort(v.begin(), v.end());
    
    int m = v.size();
    
    vector<int> dp(m); 
    for(int i=0; i<m; i++){
        dp[i] = v[i].first.second;
    }
    int ans = dp[0];
    
    for(int i=1; i<m; i++){
        for(int j=0; j<i; j++){
            if((v[j].second.first < v[i].second.first && v[j].second.second < v[i].second.second) || (v[j].second.first < v[i].second.second && v[j].second.second < v[i].second.first)){
                dp[i] = max(dp[i], dp[j] + v[i].first.second);
            }
            ans = max(ans, dp[i]);
        }
    }
    return ans;
}