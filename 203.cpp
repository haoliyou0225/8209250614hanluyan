#include<iostream>
using namespace std;
int main() {
	double a, b, c,zhouchang;
	cin >> a>> b>> c;
	
	
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		zhouchang = a + b + c;
		cout << "周长为" << zhouchang << endl;
	}
	if ((a == b) || (a == c) ||(b == c)) 
		cout << "是等腰" << endl;
	 else cout << "不是" << endl;
	return 0;
}