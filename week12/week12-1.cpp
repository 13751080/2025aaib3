#include<iostream>
using namespace std;
// week12-1.cpp
// SOIT107_ADVANCE_013_C_C++
int max(int a, int b, int c, int d)
{
	int ans = a;
	if (b>ans) ans = b;
	if (c>ans) ans = c;
	if (d>ans) ans = d;
	return ans;
}
int min(int a, int b, int c, int d)
{
	int ans = a;
	if (b<ans) ans = b;
	if (c<ans) ans = c;
	if (d<ans) ans = d;
	return ans;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
