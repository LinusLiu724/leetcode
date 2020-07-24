#include <iostream>

class Solution {
public:
    bool divisorGame(int N) {
        /*count 奇数时，为true 偶数时，为false*/
        int count = 0;
        int x = N -1;

        for (; x >= 1; x--) {
            if ((N % x) == 0) {
                N = N - x;
                x = N;
                count ++;
            }
        }

        if ((count % 2) == 0) {
            return false;
        } else {
            return true;
        }
    }



    /* 官方解法 return N % 2 == 0; */
}
