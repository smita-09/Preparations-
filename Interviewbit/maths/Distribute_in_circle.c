int Solution::solve(int A, int B, int C) {
    int form = (C+A-1)%B;
    if( form == 0)
        return B;
    else return form;
}
