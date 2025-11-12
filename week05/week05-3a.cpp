/// week05-3a.cpp 三合一的 Part1/Part2 Input/Output
/// CPE 這次的第2題 UVA 483 Word Scramble 把字弄反
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string line; /// Part 1: Input
    while ( getline(cin, line) ) {
    /// 讀入1行 一直讀,讀到Ctrl-Z才結束

        /// Part 2: Output
        cout << line << endl; /// 先隨便印出來
    }
}

