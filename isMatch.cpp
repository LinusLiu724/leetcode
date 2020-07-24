/**
 * 通配符匹配
 * 给定一个字符串 (s) 和一个字符模式 (p) ，实现一个支持 '?' 和 '*' 的通配符匹配。
 * 状态转移方程：
 * 1、s为空，p 为空：dp[0][0] = ture;
 * 2、s为空，p 不为空，恒为假，false
 * 3、
 */

#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int s_lens = s.size();
        int p_lens = p.size();
        int i, j;

        vector<vector<boolean>> dp(s_lens + 1, vector<boolean>(p_lens + 1));
        dp[0][0] = true;

        /* p 开头为多个*号的情况 */
        for (i = 1; i <= p_lens, i++) {
            if (p[i - 1] = '*') {
                dp[0][i] = true;
            } else {
                break;
            }
        }

        for (i = 1; i <= s_lens, i++) {
            for (j = 1; j < p_lens, j++) {
                if (p[j - 1] == '?') {

                } else if (p[j - 1] == '*') {

                } else if (s[i - 1] == (p[j - 1]) {

                } else {
                    dp[i][j] = false;
                }
            }
        }



    }
};