#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin >> t;
	while(t--){
	    
	    int n, s;
	    cin >> n >> s;
	    long arr[n], sum, start = -1, end = 0;
	    for(int i=1; i<=n; i++){
	        cin >> arr[i];
	    }
	    
	    for(int i=1; i<=n; i++){
	        for(int j=i; j<=n; j++){
	            sum += arr[j];
	            if(sum == s && start == -1){
	                start = i;
	                end = j;
                    sum = 0;
                    break;
	            }else if(sum > s){
                    sum = 0;
	                break;
	            
                
                
                
                
                
                
                
                }
	        }
	    }

	    if(end != 0){
            cout << start << " " << end << endl;
        }else{
            cout << -1 << endl;
        }
	}
	return 0;
}