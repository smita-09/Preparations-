int Solution::titleToNumber(string A) {
    int cnt = 0;
    for (int i=0; i < A.length(); i++){
        int val = A[i]-'A' + 1;
        cnt = cnt*26 + val;
    }
    return cnt;
}
