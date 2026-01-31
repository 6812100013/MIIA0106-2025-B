//cout/cin เบื้องต้น
//รับชื่อเล่นและอายุ 
#include <iostream>
using namespace std;

int main() {
	string nickname;
	int age;

	//TODO: รับค่า nickname
	cout << "Input nickname :";
	cin >> nickname;

	//TODO:รับค่า age
	cout << "Input Age :";
	cin >> age;
	//TODO:แสดงผล
	cout << "Nickname :" << nickname <<"\n";
	cout << "Age :" << age;


	return 0;
}