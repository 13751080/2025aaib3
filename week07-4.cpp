// week07-4.cpp
// SOIT_ADVANCE_011
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int d1 = (s[0]-'0') * 8;
	int d2 = (s[1]-'0') * 4;
	int d3 = (s[2]-'0') * 2;
	int d4 = (s[3]-'0') * 1;
	int ans = d1+d2+d3+d4;
	cout << ans << "\n";
}
