class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> original(n);
        bitset<32> reversed;
        
        for (int i=0; i<32;i++) {
            reversed[31-i]=original[i];
        }
        
        return reversed.to_ulong();
    }
};