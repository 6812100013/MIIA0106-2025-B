#include <iostream>
#include<string>
using namespace std;

int maxOfThree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}
int minOfThree(int a, int b, int c)
{
	if (a >= b && a <= c)
		return a;
	else if (b <= a && b <= c)
		return b;
	else
		return c;



}






int main()
{
	int a, b, c;
	int maxvalue = -1000000;
	int minvalue = 1000000;



	cout << "Enter a integers:";
	cin >> a;

	cout << "Enter b integers:";
	cin >> b;

	cout << "Enter c integers:";
	cin >> c;

	maxvalue = maxOfThree(a, b, c);
	cout << "the maximum value is :" << maxvalue << endl;

	maxvalue = minOfThree(a, b, c);
	cout << "the minimum value is :" << minvalue << endl;




	return 1;
}