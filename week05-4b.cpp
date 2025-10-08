// week05-4b.cpp
// SOIT107_ADVANCE_002
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a(6);
	int M = -9999, m = 9999;
	for(int i=0; i<6; i++){
		cin >> a[i];
		if(a[i]>M) M = a[i];
		if(a[i]<m) m = a[i];
	}
	cout << M-m;
}
