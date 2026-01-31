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
};

int main()
{
	const int SIZE = 5;
	Student students[SIZE];

	// INPUT
	for (int i = 0; i < SIZE; i++)
	{
		cout << "=== Input Student " << (i + 1) << " ===\n";
		students[i].input();
		cout << endl;
	}

	// OUTPUT
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Student " << (i + 1) << ":\n";
		students[i].print();
		cout << "----------------------\n";
	}

	return 0;
}