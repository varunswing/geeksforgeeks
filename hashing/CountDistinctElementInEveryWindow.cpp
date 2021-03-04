// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct(int[], int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        vector <int> result = countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends



vector <int> countDistinct (int A[], int n, int k)
{
    //code here.
       unordered_map<int, int> m;
    
    for(int i = 0; i < k; i++)
    {
        m[A[i]]++;
    }
    
    vector<int> v;
    v.push_back(m.size());
    
    for(int i = k; i < n; i++)
    {
        m[A[i - k]]--;
        
        if(m[A[i - k]] == 0)
        {
            m.erase(A[i - k]);
        }
        
        m[A[i]]++;
        
        v.push_back(m.size());
    }
    
    return v;
}