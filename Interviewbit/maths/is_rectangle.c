int Solution::solve(int A, int B, int C, int D) {
    if( A == B && B == C && C == D){
        return 1;
    }
    else if( A == B ){
        if(C == D)
        return 1;
        else return 0;
    }
    else if(A == C){
        if(B == D)
        return 1;
        else return 0;
    }
    else if(A == D){
        if(B == C){
            return 1;
        }
        else return 0;
    }
    else return 0;
}
