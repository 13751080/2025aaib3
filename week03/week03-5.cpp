// week03-5.cpp
// LeetCode 學習計畫 第9題 Can Make Arithmetic Progression From Sequence
// 把數字「小排到大」是不是「相鄰都差一樣的數字」
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // 把陣列 小到大 排好

        int d = arr[1] - arr [0]; // 兩數差 d
        for(int i=1; i<arr.size(); i++){ // 迴圈從一開始, 因要找前一項
            if(arr[i] - arr[i-1] != d) return false;
        } // 如果「後項-前項」不是 d 的話,就失敗
        return true;
    }
};
