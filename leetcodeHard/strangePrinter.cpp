class Solution {
public:
    int strangePrinter(string s) {
        int n = s.size();
        if (n == 0) return 0;

        // DP table where dp[i][j] represents the minimum turns needed to print s[i...j]
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Filling the DP table
        for (int len = 1; len <= n; ++len) { // len is the length of the substring
            for (int i = 0; i + len - 1 < n; ++i) {
                int j = i + len - 1;
                dp[i][j] = len; // worst case: printing each character separately
                
                for (int k = i + 1; k <= j; ++k) {
                    int totalCost = dp[i][k-1] + dp[k][j];
                    if (s[i] == s[k]) {
                        totalCost--;
                    }
                    dp[i][j] = min(dp[i][j], totalCost);
                }
            }
        }

        return dp[0][n-1];
    }
};