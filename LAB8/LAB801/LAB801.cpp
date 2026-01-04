
#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    // TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
	string Id;
	string nickname;
	string lineId;
	string Phone;
};

int main() {
    Student s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	cout << "Enter ID: ";
	cin >> s1.Id;

	cout << "Enter Nickname: ";
	cin >> s1.nickname;

	cout << "Enter Line ID: ";
	cin >> s1.lineId;

	cout << "Enter Phone: ";
	cin >> s1.Phone;

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
	
	cout << "id\tnickname\tlineId\tphone\n";
	cout << s1.Id << "\t" << s1.nickname << "\t" << s1.lineId << "\t" << s1.Phone << "\n";

    return 0;
}
