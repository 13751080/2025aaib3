// week01-3.cpp
// SOIT108_Base_003A
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int ans = 0;
	for(int i=a; i<=b; i++){
		if(i%3==0) ans += i;
	}
	printf("%d", ans);
	return 0;
}
