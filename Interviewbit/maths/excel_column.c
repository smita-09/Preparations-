string Solution::convertToTitle(int n) {
    string ans="";
    while(n){
        if( n % 26 == 0){
            ans += 'Z';
            n = n/ 26-1;
        }
        else{
            ans += (n%26) + 'A' - 1;
            n = n/ 26;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
