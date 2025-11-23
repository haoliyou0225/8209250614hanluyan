#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >>a>> b;
	
	int min = (a < b) ? a : b;
	for (;  !(a % min== 0 && b % min == 0); min--)
	{}
		cout << min<< endl; ///最大公约shu
	int max = (a > b) ? a : b;
	for ( ;!(max%a==0&&max%b==0); ++max)
	{ }
		cout << max<<endl;//最小公倍数
	return 0;

}
