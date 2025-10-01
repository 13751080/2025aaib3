// week04-5.cpp
// LeetCode 學習計畫第7題 66. Plus One
// 從右往左看、到過來的迴圈
// 1, 9, 9
//       0 因為有進位, 所以左邊還是+1
//    0    因為有進位, 所以左邊還是+1
// 2       沒有進位, 直接答案就找到了
// 1, 2, 3
//       4 沒有進位, 直接答案就找到了
// 9, 9, 9
//1,0,0, 0 如果一直進位、沒有找到答案 還要在最前面補1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); // 先知道陣列的長度, 以便「倒過來的迴圈」
        for(int i=N-1; i>=0; i--){
            if( digits[i] == 9 ) digits[i] = 0; // 進位, 變成0 (還沒找到答案)
            else{ // 沒有進位, 就是找到答案了
                digits[i]++; // 就+1後, 沒有進位
                return digits; // 找到答案了, 送出去
            }
        }
        // 都沒找到答案, 也就是 9,9,9 一直進位、沒有找到答案, 還要在最前面補1
        digits.insert(digits.begin(), 1); // 開始的地方, 插入1
        return digits;
    }
};
