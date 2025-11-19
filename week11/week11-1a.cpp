// week11-1a.cpp 挑戰題 二合一, 先用(笨方法) 寫一次
// LeetCode 2154. Keep Multiplying Found Values by Two
// 首次乘2倍,把沒有的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1) { // 用 while 迴圈 一直做
            int found = 0; // 一開始還沒找到
            for (int i=0; i<nums.size(); i++){ // 找 original 有沒有在 nums 裡
                if (nums[i] == original) found = 1; // 找到了
            }
            if (found==0) break; // 失敗, 繼續, 乘2倍
        }
        return original;
    }
};
