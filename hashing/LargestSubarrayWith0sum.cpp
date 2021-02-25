// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int A[], int n)
{
    // Your code here
    map<int, int> m;
    int sum = 0, ans = 0;
    for(int i=0; i<n; i++){
        sum += A[i];
        if(sum == 0){
            ans = i+1;
        }else{
            if(m.find(sum) != m.end()){
                ans = max(ans, i - m[sum]);
            }else{
                m[sum] = i;
            }
        }
    }
    return ans;
}
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int A[], int n)
{
    // Your code here
    map<int, int> m;
    int sum = 0, ans = 0;
    for(int i=0; i<n; i++){
        sum += A[i];
        if(sum == 0){
            ans = i+1;
        }else{
            if(m.find(sum) != m.end()){
                ans = max(ans, i - m[sum]);
            }else{
                m[sum] = i;
            }
        }
    }
    return ans;
}
