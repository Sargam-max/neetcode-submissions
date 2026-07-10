class Solution {
public:
    int hammingWeight(uint32_t n) {

        int ct=0;

        while(n){
            ct+=(n&1);
            n>>=1;
        }

        return ct;

    }
};
