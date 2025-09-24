// week03-4a.cpp 第一種寫法,成功!
// LeetCode 學習計畫第6題 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // 偷偷先塞答案, 再塞回去 nums
        for(int i=0; i<nums.size();i++){ // 全部巡一次
            if(nums[i] != 0) ans.push_back(nums[i]);
        } // 有「不是0的數」偷偷備份、塞到答案的後面

        for(int i=0; i<nums.size();i++){ // 再巡一次
            if(i<ans.size()) nums[i] = ans[i]; // 塞剛剛備份的答案
            else nums[i] = 0; // 之後,塞 0 的值
        }
    }
};
