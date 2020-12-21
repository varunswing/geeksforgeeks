// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends


//User function Template for C++

/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/
int posOfRightMostDiffBit(int m, int n)
{
    // Your code here
    int ans, x;
    ans = (m ^ n);
    if(ans == 0){
        x = -1;
    }else{
        for(int i=1; i<11; i++){
            if(ans&1 == true){
                x = 1;
                break;
            }else if((ans&(1<<i)) != 0){
                x = i+1;
                break;
            }
        }
    }
    return x;
}

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends