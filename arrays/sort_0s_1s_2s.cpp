void sort012(int a[], int n)
{
    // coode here 
    map<int, int> m;
    for(int i=0; i<n; i++){
        m[a[i]]++;
    }
    int zero = m[0];
    int one = zero + m[1];
    int two = one + m[2];
    for(int i=0; i<n; i++){
        if(zero > i){
            a[i] = 0;
        }else if(one > i){
            a[i] = 1;
        }else if(two > i){
            a[i] = 2;
        }
    }
}