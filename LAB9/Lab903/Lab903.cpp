// TODO 1) เติม field และ method ใน class Student 
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) 
// TODO 3) เรียกใช้งาน printStudent จาก main
#include  <iostream>
#include  <string>
using namespace std;
class Student {
public:
	string id;
	string nickname;
	string lineId;
	string phone;

	void input() {
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Lineid: ";
		cin >> lineId;
		cout << "Enter Phone: ";
		cin >> phone;
	}

	void print() const {
		cout << "ID: " << id << '\n';
		cout << "Nickname: " << nickname << '\n';
		cout << "Line ID: " << lineId << '\n';
		cout << "Phone: " << phone << '\n';
	}
};
void printStudent(Student s)
{
	// TODO: แสดงข้อมูลจาก object s
	cout << "ID: " << s.id << '\n';
	cout << "Nickname: " << s.nickname << '\n';
	cout << "Line ID: " << s.lineId << '\n';
	cout << "Phone: " << s.phone << '\n';
}
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: s1.input();
	s1.input();

	cout << "\n=== Output (from function) ===\n";
	// TODO: printStudent(s1);
	printStudent(s1);

	return 0;
}
