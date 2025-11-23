#include<iostream>
using namespace std;
int main()
{
	double a;
	cin >> a;
	double x1 = a;
	double x2 = (x1 + a / x1) / 2;
	if (a < 0)
	{
		cout << "不可运行" << endl;
	}
	for (; ; )
		if ((x2< 1e-5) && (x2> -1e-5))

		{
			break;
		}
		
	cout << x2 << endl;
		
		
	return 0;
}