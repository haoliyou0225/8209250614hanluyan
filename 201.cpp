#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> a;
	if (a >= 'a' && a <= 'z')
		cout << (a = a - 32) << endl;
	else cout << static_cast<int>(a + 1) << endl;
	return 0;

}