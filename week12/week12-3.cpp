// week12-3.cpp 學習計畫 Math 第4題
// LeetCode 976. Largest Perimeter Triangle
// 要用 nums 裡的棒子長度, 組合出「三角形」兩邊和>第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // 排序(又快又好)
        // for (int i=nums.size()-1; i>=0; i--) { // 用迴圈, 大到小都試一次
        // 倒過來的迴圈
        //    cout << nums[i] <<" "; // 印出大到小的數
        //} // 先印出「大到小」等一下, 這三行會刪掉
        for (int i=nums.size()-1; i>=2; i--){
            if (nums[i] < nums[i-1] + nums[i-2]) return nums[i]+nums[i-1]+nums[i-2];
            // 如果順利「兩邊和大於第三邊」 就把周長加起來, 當成答案
        }

        return 0; // 找不到任何「合法」的三角形, 就 return 0
    }
};
