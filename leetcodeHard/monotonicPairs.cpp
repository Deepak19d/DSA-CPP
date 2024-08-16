class Solution {
public:
    int countOfPairs(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        vector<int> dp(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[j] <= nums[i - 1]) {
                    dp[i] = (dp[i] + dp[j]) % MOD;
                }
            }
        }
        int res = 0;
        for (int i = 0; i < n; ++i) {
            res = (res + dp[i + 1]) % MOD;
        }
        return res;
    }
};