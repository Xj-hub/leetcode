/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        
    if (n<=2) return 0;
	vector<bool> passed(n, false);
	int sum = 1;
	int upper = sqrt(n);
	for (int i=3; i<n; i+=2) {
		if (!passed[i]) {
			sum++;
			//avoid overflow
			if (i>upper) continue;
			for (int j=i*i; j<n; j+=2*i) { //i*(i + 2)
				passed[j] = true;
			}
		}
	}
	return sum;
    }
};
// @lc code=end

