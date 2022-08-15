/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        int dp[n];
        dp[0] = nums[0];
        dp[1] = nums[1];

        int ans = max(dp[0],dp[1]);

        for (int i = 2; i < n; i++) {
            int mx1 = 0,mx2 = dp[i-2];
            if(i - 3 >= 0) mx1 = dp[i-3];

            dp[i] = max(mx1,mx2) + nums[i];

            ans = max(ans,dp[i]);
        }

        return ans;
    }
};
// @lc code=end

