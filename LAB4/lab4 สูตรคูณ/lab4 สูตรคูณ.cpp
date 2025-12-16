#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	cout << " ----- Multiplication Table for 13 ---- \n";
	int number = 13;
	{
		for (int i = 1; i <= 12; i++)
		{
			cout << number << " x " << i << " = " << number * i << "\n";
		}
		cout << "\n"; 
	}
	return 1;
}
