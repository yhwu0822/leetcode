class Solution {
public:
    int hammingWeight(uint32_t n) {
        int output = 0;
        for (int i = 0; i < 32; i++) {
            output += (n % 2);
            n >>= 1;
        }
        return output;
    }
};