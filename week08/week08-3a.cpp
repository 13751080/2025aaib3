// week08-3a.cpp LeetCode 學習計畫 Simulation
// 1275. Find Winner on a Tic Tac Toe Game
// 看起來 3x3 陣列, 所以開 int a[3][3] = {} 陣列 再用 myPrint() 印出來
class Solution {
public:
void myPrint(int a[3][3]){ // 小幫手,幫我們印出來
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // 有大括號,會給0
        int now = 1; // 1: 玩家A 第1個玩家 2: 玩家B 第2個玩家
        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now; //a[i][j] = 1; // 玩家A 第1個玩家
            myPrint(a); // 把陣列印出來 小幫手
            if(now==1) now = 2; // A下完後, 將換B下
            else now = 1; // B下完後, 將換A下
        }
        return "A"; // 先隨便 return
    }
};
