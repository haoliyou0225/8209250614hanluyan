#include<iostream>
using namespace std;
int main() {
	double y, x;
	cin >> x;
	if (0 < x &&x< 1)
		cout << (y = 3.0 - (2.0 * x)) << endl;
	else if (1 <= x&&x < 5)
		cout << ((y = 2.0 / (4.0 * x) + 1)) << endl;
	else if (5 <= x < 10)

		cout << (y = x * x) << endl;
	else cout << "²»ÔÚ·¶Î§ÄÚ" << endl;
		
	return 0;
} 