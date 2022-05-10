vector<int> Solution::allFactors(int A) {
    vector<int> v;
    for( int i = 1; i <= sqrt(A); i++){
        if(A%i == 0){
            if( A/i != i)
                v.push_back(A/i);
            v.push_back(i);
        }
    }
    //sort(A, A + v.size());
    sort(v.begin(), v.end());
    return v;
}

