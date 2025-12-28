#include <iostream>
#include <string>

using namespace std;


int main()
{
	int x = 10;
	int y = 20;

	cout << "address of x: " << &x << endl;
	cout << "Value of x: " << x << endl;

	//pointer
	int* pt = &x;
	*pt = 100;
	


	
	cout << "address of pt is : " << &pt << endl;
	cout << "Value of pt is: " << pt << endl;
	cout << "Value of x is: " << x << endl;
	cout << "Value of y is: " << y << endl;

	pt = &y;
	*pt = 500;
	cout << "Value of y is: " << x << endl;
	cout << "Value of x is: " << y << endl;

	return 0;

}
