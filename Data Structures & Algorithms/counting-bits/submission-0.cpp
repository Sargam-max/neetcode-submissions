class Solution {
public:
    std::vector<int> countBits(int n) {
        // Initialize a vector of size n + 1 with all zeros
        std::vector<int> dp(n + 1, 0);
        
        // Iterate from 1 up to n
        for (int i = 1; i <= n; ++i) {
            // dp[i >> 1] is the number of 1s in i / 2
            // (i & 1) checks if the least significant bit is 1 (odd number)
            dp[i] = dp[i >> 1] + (i & 1);
        }
        
        return dp;
    }
};