class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
       int d=log2(n)+1;
       int k = pow(2,d)-1;
        return n^k;
    }
};
