// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

void maxMeetings(int *, int *, int);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        maxMeetings(start, end, n);
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


void maxMeetings(int start[], int end[], int n) {
    // Your code here
    multimap<pair<int, int>, int> meetings;
    int last = 0;
    vector<int> ans;
    for(int i=0; i<n; i++){
        meetings.insert({{end[i], i + 1}, start[i]});
    }for(auto it: meetings){
        if(it.second > last){
            ans.push_back(it.first.second), last = it.first.first;
        }
    }for(auto it: ans)
        cout << it << " ";
    
}