#include <iostream>
class Solution {
public:
    vector<int> divingBoard(int shorter, int longer, int k) {
        int tmp;
        vector<int> res;

        if (k <= 0) {
            return res;
        }
        if (shorter == longer) {
            tmp = shorter * k;
            res.push_back(tmp);
            return res;
        } else {
            for (int i = k; i >= 0; i--) {
                tmp = shorter * i + longer * (k - i);
                res.push_back(tmp);
            }
        }

        return res;
    }
}