class Solution {
public:
    int hammingWeight(uint32_t n) {

        string s=bitset<32>(n).to_string();
        int ct=0;
        for(auto i:s){
            if(i=='1'){
                ct++;
            }
        }

        return ct;

    }
};
