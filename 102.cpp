#include<iostream>
using namespace std;
int main()
{
	int r, h, v;
	const int pi = 3.14;
	cin >> r >> h;
	v = pi * r ^ 2 * h / 3;
	cout << v << endl;
	return 0;