vector<int> Solution::solve(vector<int> &A) {
    int i = 0, neg_start = 0, pos_start = 0;
    vector<int> res;
    for(i = 0; i < A.size(); i++){
        if(A[i]> 0)
            break;
    }
    if( i == 0){
        for( int j = 0; j < A.size(); j++){
            res.push_back(A[j]*A[j]);
        }
        return res;
    }
    else{
        neg_start = i-1;
        pos_start = i;
    }
    // cout << neg_start<< " "<< pos_start <<endl;
    while(neg_start >= 0 && pos_start <= A.size()-1){
        if( abs(A[neg_start]) < abs(A[pos_start])){
            res.push_back(A[neg_start]*A[neg_start]);
            neg_start--;
            // cout << A[neg_start]*A[neg_start] << " "<< neg_start<<endl;
        }
        else if( abs( A[neg_start]) > abs(A[pos_start])){
            res.push_back(A[pos_start]*A[pos_start]);
            pos_start++;
            // cout << A[pos_start]*A[pos_start] << " "<<pos_start << endl;
        }
        else if( abs(A[neg_start]) == abs(A[pos_start])){
            res.push_back(A[neg_start]*A[neg_start]);
            res.push_back(A[pos_start]*A[pos_start]);
            neg_start--;
            pos_start++;
        }
    }
    while( neg_start >=0){
        res.push_back(A[neg_start]*A[neg_start]);
        neg_start--;
    }
    while(pos_start <= A.size()-1){
        res.push_back(A[pos_start]*A[pos_start]);
        pos_start++;
    }
    return res;
}
