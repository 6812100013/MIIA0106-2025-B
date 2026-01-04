#include <iostream>
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
    // TODO: (ถ้าต้องการเพิ่ม) เช่น postcode[6]
};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
	Address addr; 
    Phone Tel;
    // TODO:
};

int main() {
    Student s1;

    // TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "Address - House Number: ";
    // TODO 3) cin >> 
	cin >> s1.addr.number;

    cout << "Address - Road: ";
	cin >> s1.addr.road;

    // TODO 3) cin >> 
    cout << "Address - District: ";
	cin >> s1.addr.district;

    // TODO 3) cin >> 
    cout << "Address - Province:";
    cin >> s1.addr.province;

    // TODO 3) cin >> 
    cout << "Phone - Home: ";
    cin >> s1.Tel.home;

    // TODO 3) cin >> 
    cout << "Phone - Mobile: ";
	cin >> s1.Tel.mobile;
	

    // TODO 3) cin >> 

    cout << "\n===== Output =====\n";
	cout << "ID: " << s1.id << "\n";
	cout << "Name: " << s1.name << "\n";
	cout << "Surname: " << s1.surname << "\n";
	cout << "Address - House Number: " << s1.addr.number << "\n";
	cout << "Address - Road: " << s1.addr.road << "\n";
	cout << "Address - District: " << s1.addr.district << "\n";
	cout << "Address - Province: " << s1.addr.province << "\n";
	cout << "Phone - Home: " << s1.Tel.home << "\n";
	cout << "Phone - Mobile: " << s1.Tel.mobile << "\n";

    //// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)

    return 0;
}
