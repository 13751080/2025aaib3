// week10-2a.cpp 學習計畫 Math 的第1題 (先寫錯的版本)
// LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for (int i=low; i<=high; i++){
            if (i%2==1) ans++;
        } // 先寫錯的版本 用for迴圈
        return ans;
    }
};
