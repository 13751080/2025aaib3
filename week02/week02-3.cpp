/// week02-3.cpp LeerCode學習計畫第1題
/// 1768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int N1 = word1.length(); /// 字串的長度
       int N2 = word2.length();
       string ans; /// 答案的字串,一開始沒有東西
       for(int i=0; i<max(N1,N2) ;i++){
            if(i<N1) ans += word1[i]; /// 把字母,放入答案
            if(i<N2) ans += word2[i]; /// 把字母,放入答案
       }
       return ans; /// 答案傳出去,結束
    }
};
