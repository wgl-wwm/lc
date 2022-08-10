/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();

        int len = 1;
        int begin = 0;
        int dp[1010][1010] = {0};

        for(int i = 0; i < n;i++){
            dp[i][i] = 1;
        }
        for(int i = 0;i < n-1;i++){
            dp[i][i+1] = (s[i] == s[i+1]) ? 1 : 0;
            if(dp[i][i+1] && 2 > len) {
                    len = 2;
                    begin = i;
                }
        }

        for(int l = 3;l<=n;l++){

            for(int i = 0;i + l -1 < n;i++){
                dp[i][i+l-1] = dp[i+1][i+l-2] && (s[i] == s[i+l-1]);
                
                if(dp[i][i+l-1] && l > len) {
                    len = l;
                    begin = i;
                }
                
            }
        }
        return s.substr(begin,len);
    }
};
// @lc code=end

