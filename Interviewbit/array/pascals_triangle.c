vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res;
    vector<int> v;
    if( A == 0) return res;
    v.push_back(1);
    res.push_back(v);
    if(A == 1) return res;
    for( int i = 1; i < A; i++){
        vector<int>v;
        v.push_back(1);
        for(int j = 1; j <= i-1; j++){
            v.push_back(res[i-1][j-1] + res[i-1][j]);
        }
        v.push_back(1);
        res.push_back(v);
    }
    return res;
}
