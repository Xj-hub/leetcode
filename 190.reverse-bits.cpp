/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0, power = 31;
        while (n != 0) {
        res += (n & 1) << power;
        n = n >> 1;
        power -= 1;
        }
        return res;
    }
};
// @lc code=end

