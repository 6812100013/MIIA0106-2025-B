// TODO 1) เติม field ใน class Student: id, nickname
 // TODO 2) ใช้ pointer p ชี้ไปที่ s1 
// TODO 3) กำหนดค่าโดยใช้ p-> 
// TODO 4) แสดงผลโดยใช้ p->
#include  <iostream>
#include  <string>
using namespace std;
class Student {
public:
	string id;
	string nickname;
	string lineId;
	string phone;
	//=รับค่าความสูงเป็น m
	//=รับค่าน้ำหนักเป็น kg
	string height;
	string weight;

	void input() {
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Lineid: ";
		cin >> lineId;
		cout << "Enter Phone: ";
		cin >> phone;

		cout << "Enter Height (m): ";
		cin >> height;
		cout << "Enter Weight (kg): ";
		cin >> weight;

	}

	void print() const {
		cout << "ID: " << id << '\n';
		cout << "Nickname: " << nickname << '\n';
		cout << "Line ID: " << lineId << '\n';
		cout << "Phone: " << phone << '\n';

		cout << "Height (m): " << height << '\n';
		cout << "Weight (kg): " << weight << '\n';

	}

	double calcBMI()

	{
		return stod(weight) / (stod(height) * stod(height));

	}





};
int main()
{
	Student s1;
	Student* p = nullptr;
	// TODO: p = &s1;
	// TODO: p->id = ...;
	// TODO: p->nickname = ...;
	p = &s1;
	p->id = "6812100013";
	p->nickname = "Aong";
	p->lineId = "aongline";
	p->phone = "0812345678";

		


	cout << "ID: " << p->id << endl;
	cout << "Nickname: " << p->nickname << endl;

	return 0;
}
