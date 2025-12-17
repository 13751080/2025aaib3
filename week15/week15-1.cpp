// week15-1.cpp 學習計畫 Math 第5題
// LeetCode 1232. Check If It Is a Straight Line
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dx = coordinates[1][0] - coordinates[0][0]; // x座標相減
        int dy = coordinates[1][1] - coordinates[0][1]; // y座標相減
        // 比例相等 dy : dx = dy2 : dx2
        // 交擦相乘 dx * dy2 == dy * dx2
        for (int i = 2; i < coordinates.size(); i++) { // 後面的點
            int dx2 = coordinates[i][0] - coordinates[0][0];
            int dy2 = coordinates[i][1] - coordinates[0][1];
            if (dx * dy2 != dy * dx2) return false; // 不相等,就失敗
        }
        return true; // 都沒有失敗,就是成功
    }
};
