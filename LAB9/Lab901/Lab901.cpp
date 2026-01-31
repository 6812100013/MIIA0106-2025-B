#include <iostream>
#include <string>

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

	int main()
	{
		Student s1;
		cout << "=== Input Student 1 ===\n";
		s1.input();

		cout << "\n=== Output Student 1 ===\n";
		s1.print();

		return 0;
	}