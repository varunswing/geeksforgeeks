class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> v;
        int arr[36] = {12, 23, 34, 45, 56, 67, 78, 89,
                     123, 234, 345, 456, 567, 678, 789, 
                     1234, 2345, 3456, 4567, 5678, 6789, 
                     12345, 23456, 34567, 45678, 56789, 
                     123456, 234567, 345678, 456789, 
                     1234567, 2345678, 3456789, 
                     12345678, 23456789, 
                     123456789};
        for(int i=0; i<36; i++){
            if(arr[i] < low) continue;
            if(arr[i] > high) break;
            v.push_back(arr[i]);
        }

        // string digits = "123456789";
        
        // int nl = to_string(low).length();
        // int nh = to_string(high).length();
        
        // for(int i=nl; i<=nh; i++){
        //     for(int j=0; j<10-i; j++){
        //         int num = stoi(digits.substr(j, i));
        //         if(num >= low && num <= high){
        //             v.push_back(num);
        //         }
        //     }
        // }
        return v;
    }
};