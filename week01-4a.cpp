/// week01-4a.cpp 使用 C語言 寫
#include <stdio.h> /// 使用 C語言 外掛

int main()
{
	int a, b;
	scanf("%d %d", &a, &b); /// C語言 讀資料
	int ans = 0;
	for(int i=a; i<=b; i++){
		if(i%3==0) ans += i;
	}
	printf("%d", ans); /// C語言 印資料
	return 0;
}
