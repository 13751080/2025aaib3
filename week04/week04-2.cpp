/// week04-2.cpp
/// 更多的 vector<int> a 的初始化 (裡面要放什麼值)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(3); /// 初始的長度3, 裡面都放0
    vector<int> b(3, 88); /// 初始的長度3, 裡面都放88

    int c[10] = {1, 2, 3, 9, 8, 7, 4, 5, 6, 0}; /// C語言的陣列宣言、初始值

    vector<int> d(c, c+3); /// 從哪裡開始、到哪裡結束 陣列c開始,再移3格結束
    for(int i=0; i<d.size();i++) cout << d[i] << " ";/// 88 88 88
    cout << "這是用 C語言的陣列輔助、幫忙C++陣列的初始化一堆值\n\n";

    vector<int> e(c, c+10); /// 從哪裡開始、到哪裡結束 陣列c開始,再移10格結束
    for(int i=0; i<e.size();i++) cout << e[i] << " ";/// 88 88 88
    cout << "這也是用 C語言的陣列輔助、幫忙C++陣列的初始化一堆值\n\n";
}
