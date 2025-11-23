#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float huashi,sheshidu;
	cin >> huashi;
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶È" << setprecision(2)<<huashi<<endl;
	sheshidu = (huashi - 32) * 5 / 9;
	cout << fixed << endl;
	cout << "ÇëÉãÈëÉãÊÏ¶È" << setprecision(2)<<sheshidu << endl;
	return 0;


}