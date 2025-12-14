#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "Kokiat Sena";
	cout << " Test lab 04 \n";

	cout << " Myname is " << name << "\n";	

	cout << "Please enther your name ! ";

	// kokiat sena
	// name ==>> Kokiat
	// Sena =>> buffer


	
	cin >> name;
	cin.ignore(); // clear buffer
	// cin ใช้ในการเก็บข้อมูลไว้ในตัวแปร
	// cin >> name ; // เจอช่องว่างจะไม่รับข้อมูล

	getline(cin, name);

	cout << "name is " << name << "----" << endl;










	return 1;
}