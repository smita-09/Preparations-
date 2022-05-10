string Solution::findDigitsInBinary(int A) {
    string tem = "";
    int i = A;
    if(A == 0) return "0";
    while(i!=0){
        int temp = i/2;
        if(i%2 == 0){
            tem = tem + to_string(0); 
        }else tem += to_string(1);
        i = temp;
    }
    reverse(tem.begin(), tem.end());
    return tem;
}
