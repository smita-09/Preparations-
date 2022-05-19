bool isprime(int v){
    // if(v == 2) return true;
    for(int i = 2; i <= sqrt(v); i++){
        if( v%i == 0)
            return false;
    }
    return true;
}

vector<int> Solution::primesum(int A) {
    // The very first thing that we need to do is we need to iterate over all primes and then we need to subtra
    vector<int> v;
    for(int i = 2; i <= A/2; i++){
        if(isprime(i)){
            if(isprime(A-i)){
                v.push_back(i);
                v.push_back(A-i);
                return v;
            }
        }
    }
}