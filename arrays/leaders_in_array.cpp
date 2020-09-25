#include <bits/stdc++.h>
using namespace std;

int main()
 {
	//code
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        stack<int> st;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        st.push(a[n-1]);
        for(int i=n-2; i>=0; i--){
            if(st.top() <= a[i]){
                st.push(a[i]);
            }
        }
        while(st.empty() == false){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
        
    }

	return 0;
}