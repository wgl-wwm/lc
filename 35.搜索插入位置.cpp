/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n = nums.size();;
        int l = 0,h = n;
        int mid;
        while (l < h){
            mid = (l+h)/2;
            if(nums[mid] == t) {
                return mid;
            }
            else if(nums[mid] > t) {
                h = mid;
            }
            else{
                l = mid + 1;
            }
        } 

        return l;
            
            
            
            
            
            
            
            
            
            
    }
        
};

// @lc code=end

