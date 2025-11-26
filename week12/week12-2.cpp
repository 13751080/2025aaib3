// week12-2.cpp
// LeetCode 860. Lemonade Change 找零錢
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0; // 手上有多少錢
        for (int bill : bills) { // C++進階迴圈
            if (bill==5) d5++; // 拿到5元
            else if (bill==10) {
                if (d5>0){ // 還有5元可以找零
                    d10++; // 拿到10元
                    d5--; // 還客人5元
                } else return false; // 沒辦法找零
            } else if (bill==20) { // 客人手上拿20元大鈔
                if (d5>0 && d10>0){ // 剛好夠找零
                    d20++; // 收下20元
                    d10--; // 先給客人10元鈔
                    d5--; // 再給客人5元鈔
                } else if(d5>=3){ // 有3張5元可以找錢
                    d20++; // 收下20元
                    d5 -= 3; // 再給客人3張5元鈔
                } else return false; // 沒辦法找零
            }
        }
        return true; // 成功找零
    }
};
