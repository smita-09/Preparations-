vector<int> Solution::solve(vector<int> &A) {
    vector<int> res;
    int pos = 0, neg = 0;
    for( int i = 0; i < A.size(); i++){
        if(A[i] > 0) pos++;
        else if(A[i] < 0) neg++;
    }
    res.push_back(pos);
    res.push_back(neg);
    return res;
}
