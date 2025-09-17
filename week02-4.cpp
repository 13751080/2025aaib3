/// week02-4.cpp LeerCode學習計畫第2題
/// 389. Find the Difference 找到2個字串「差哪個字母」
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; /// 可以用桶子來裝字母, 右邊的大括號, 代表「一開始是空的」
        for(int i=0; i<s.length();i++){ /// 字串的for迴圈
            char c = s[i]; /// 取出字母
            A[c]++; /// 把字母,放入桶子裡
        }
        for(int i=0; i<t.length();i++){ /// 字串的for迴圈
            char c = t[i]; /// 取出字母
            A[c]--; /// 把字母,放入桶子裡
            if(A[c] < 0) return c; /// 拿光光、便負的,代表不夠用,缺它
        }
        return 0; /// 用不到
    }
};
