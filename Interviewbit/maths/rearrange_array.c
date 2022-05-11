void Solution::arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more 
    int N = A.size();
    // Keep the number that you want as a remainder and orignal value as a dividend
    for( int i = 0; i < A.size(); i++ ){
        if( A[A[i]] >= N || (A[i] < i)){

            A[i] = (A[i] * N) + (A[A[i]]/N);
        }
        else{
            A[i] = (A[i] * N) + A[A[i]]; // The old value can be obtained by dividing it and remainder is the original val
        }
    }
    for ( int i = 0; i < A.size(); i++){
        A[i] = A[i] % N;
    }
}