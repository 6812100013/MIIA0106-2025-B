
// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) รับค่าข้อมูลนักศึกษา 5 คน เก็บลง students[i]
// TODO 3) แสดงผลข้อมูลนักศึกษาทั้ง 5 คน


#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string Id;
    string nickname;
    string lineId;
    string Phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
		cout << "Enter ID: ";
		cin >> students[i].Id;

		cout << "Enter Nickname: ";
		cin >> students[i].nickname;

		cout << "Enter Line ID: ";
		cin >> students[i].lineId;

		cout << "Enter Phone: ";
		cin >> students[i].Phone;

        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    cout << "id\tnickname\tlineId\tphone\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
		cout << students[i].Id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].Phone << "\n";
        cout << "----------------------\n";
    }

    return 0;
}
