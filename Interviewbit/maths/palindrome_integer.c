int Solution::isPalindrome(int A) {
    string tmp = to_string(A);
    string B = to_string(A);
    reverse(tmp.begin(), tmp.end());
    if(B == tmp)
        return 1;
    else return 0;

}

