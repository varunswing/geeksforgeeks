// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

bool comp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int activitySelection(int start[], int end[], int n){
    // Your code here
    vector<pair<int, int>> jobTime;
    for(int i=0; i<n; i++){
        jobTime.push_back({start[i], end[i]});
    }
    
    sort(jobTime.begin(), jobTime.end(), comp);
    
    int count = 1;
    int last = jobTime[0].second;
    for(int i=1; i<n; i++){
        if(jobTime[i].first >= last){
            count++;
            last = jobTime[i].second;
        }
    }
    return count;
}

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        int start[n], end[n];
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        
        //function call
        cout << activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends