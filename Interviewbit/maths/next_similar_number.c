string Solution::solve(string A) {
    int n = A.length();
    int k,l;
    // cout<<A.length();
    if (A.length()==1) {
        // cout<<"hey";
        return "-1";
    }
    for (k  = n-2; k >=0; k--){
        if(A[k]<A[k+1]){
            break;
        }
    }
    if(k<0) return "-1";
    for( l = n-1; l >k; l--){
        if(A[l]>A[k]){
            break;
        }
    }
    swap(A[k], A[l]);
    std::reverse(A.begin()+k+1, A.end()); 
    return A;
}
