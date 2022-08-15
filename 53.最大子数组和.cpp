/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int a,b;

        a = nums[0];

        int ans = nums[0];

        for(int i = 1; i < n; ++i) {
            b = max(nums[i],nums[i] + a);
            ans = max(b,ans);
            a = b;
        }
        
        return ans;
    }
};
// @lc code=end

