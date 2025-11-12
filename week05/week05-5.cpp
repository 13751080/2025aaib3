// week05-5.cpp
// LeetCode 學習計畫 Built-In Functions 第2題 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            s[i] = tolower( s[i] );
        }
        return s;
    }
};
