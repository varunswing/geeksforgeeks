// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
        int n1, n2;
        n1 = m-l+1;
        n2 = r-m;
        int a[n1], b[n2]; 
        for(int i=0; i<n1; i++){
            a[i] = arr[l+i];
        }
        for(int i=0; i<n1; i++){
            b[i] = arr[m+1+i];
        }
        int k, i=0, j=0;
        for (k = l; i < n1 && j < n2; k++){
            if (a[i] < b[j]){
                arr[k] = a[i++];
            }else{
                arr[k] = b[j++];
            }
        }
        while (i < n1){
            arr[k++] = a[i++];
        }
        while (j < n2){
            arr[k++] = b[j++];
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        int m;
        if(l < r){
            m = (l+r)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr, l, m, r);
        }
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends