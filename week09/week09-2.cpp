// week09-2.cpp
// LeetCode 73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 第1步,先找所有的0,而且記下它的位置
        int M = matrix.size(), N = matrix[0].size();
        vector<bool> markI(M), markJ(N); // 標記i 標記j
        for (int i=0; i<M; i++){
            for (int j=0; j<N; j++){
                if (matrix[i][j]==0){  // 遇到0, 記下
                    markI[i] = true; // i 標記起來
                    markJ[j] = true; // j 標記起來
                }
            }
        }
        // 第2步, 把記下來的位置, 它的橫行markI[i]、直行markJ[j], 都設成0
        for (int i=0; i<M; i++){
            for (int j=0; j<N; j++){
                if (markI[i]==true || markJ[j]==true) matrix[i][j] = 0;
            }
        }
    }
};
