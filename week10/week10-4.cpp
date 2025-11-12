// week10-4.cpp
// SLJ-Array-016
#include <iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int N;
	cin >> N;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++){
			cin >> a[i][j];
		}
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++){
			cin >> b[i][j];
		}
	}
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++){
			int now=0;
			for(int k=0; k<N; k++){
				now += a[i][k]*b[k][j];
			}
			printf("%3d ",now);
		}
		cout << "\n";
	}
}
