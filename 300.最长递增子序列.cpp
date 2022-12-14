/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

// @lc code=start
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        int dp[n];
        dp[0] = 1;
        int ans = 1;


        for(int i = 1;i < n;i++){
            int mx = 0;
            for(int j = 0;j < i;j++){
                if(nums[j] < nums[i]) mx = max(mx,dp[j]);
            }
            dp[i] = mx + 1;
            ans = max(ans,dp[i]);
        }

        return ans;
    }
};
// @lc code=end

