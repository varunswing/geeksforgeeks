// { Driver Code Starts
#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {

    // Your code here
    if(n == 1){
        return 1;
    }else if(n == 2){
        return -1;
    }
    int lsum[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
        lsum[i] = sum;
    }
    for(int i=1; i<n; i++){
        if(lsum[i-1] == (sum - lsum[i])){
            return i+1;
        }
    }
    return -1;
}