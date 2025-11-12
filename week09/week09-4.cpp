// week09-4.cpp 學習計畫 Matrix 第3題 用 AI助手 (星星星) Leet 帶著我們寫程式
// 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int top=0, bottom=M-1, left=0, right=N-1;
        vector<int> ans;
        while (top<=bottom && left <= right){
            for (int j=left; j<=right; j++) { // 沿著 top 行
                ans.push_back(matrix[top][j]);
            }
            top++; // 每完成一個方向, 就收縮對應的邊界
            if (top > bottom) break; // 要檢查 top<=bottom, 如果錯了, 提早結束

            for (int i=top; i<=bottom; i++) { // 沿著 right右邊界
                ans.push_back(matrix[i][right]);
            }
            right--; // 收縮右邊界
            if (left > right) break;

            for (int j=right; j>=left; j--) { // 沿著 bottom 下邊界
                ans.push_back(matrix[bottom][j]);
            }
            bottom--; // 收縮下邊界

            for (int i=bottom; i>=top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
            if (left > right) break;
        }
        return ans;
    }
};
