// week14-1c.cpp
// SOIT106_ADVANCE_009
// very good!! f(n)
#include <iostream>
using namespace std;

void f(int n)
{
	if(n==0) return; // ter
	cout << n%10;
	f(n/10);
}
int main()
{
	int n;
	cin >> n;
	f(n);
	cout << "\n";
}
