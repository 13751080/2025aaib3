/// だ
/// week08-6.cpp
/// FB刮柑, 计稰龟喷, Τ程穝紇,  6174 ガ盽计(计堵瑌)
/// Input: 4计(ぃ狡)
/// 程 - 程
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cout << "叫块4计(计ぃ狡):";
    int n;
    cin >> n;
    for(int i=0; i<7; i++)
    {
        vector<int> a;
        for(int i=0; i<4; i++)
        {
            a.push_back(n%10);
            n = n / 10;
        }
        sort(a.begin(), a.end());
        int M = a[3]*1000+a[2]*100+a[1]*10+a[0];
        int m = a[0]*1000+a[1]*100+a[2]*10+a[3];
        n = M - m;
        printf("%d-%d=%d\n", M, m, n);
    }
}
