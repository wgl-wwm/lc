/*
 * @lc app=leetcode.cn id=91 lang=cpp
 *
 * [91] 解码方法
 */

// @lc code=start
class Solution {
public:
    int toint (char a,char b){
        int m = a - 48;
        int n = b - 48;

        return 10*m+n;
    }
    int numDecodings(string s) {
        int n = s.length();

        int  dp[110] = {0};

        if(s[0] == '0') return 0;

        else{
            dp[0] = 1;
            if(toint(s[0],s[1]) > 0 && toint(s[0],s[1]) < 27) dp[1] ++;
            if(s[1] != '0') dp[1] ++;


            for (int i = 2; i < n; i++) {
                if(s[i] != '0') dp[i] += dp[i-1];

                if(toint(s[i-1],s[i]) >= 10 && toint(s[i-1],s[i]) < 27) dp[i] += dp[i-2];
            }
        }

        return dp[n-1];
    }
};
// @lc code=end

