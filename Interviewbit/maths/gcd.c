int Solution::gcd(int A, int B) {
    if( A == 0 or B == 0) return max(A,B);
    long long int res = 0, limit = min(A,B);
    for( int i = 1; i <= limit; i++){
        if( (A%i == 0) && (B%i == 0))
            res = i;
    }
    return res;
}
