#include<iostream>
using namespace std;
int main()
{
	double apple = 0.8;
	int day1 = 2;
	
	int day=0;
	int sum=0;
	int x;


	for(;day1 < 100; day1 = day1 * 2)
		{
			sum = sum + day1;
			day = day + 1;
		
		}



		cout << sum << endl;
		cout << day << endl;
		x = (sum * apple) / day;
		cout << x << endl;
		return 0;
	

}