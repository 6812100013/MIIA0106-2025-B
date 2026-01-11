#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;
};

struct Student {

    string id;
    string nickname;
	string lineid;
    Phone myContact;
    Parent myParent;
};

void inputStudent(Student &student) {

    cout << "ID: ";
	cin >> student.id;

	cout << "Nickname: ";
	cin >> student.nickname;

	cout << "Line ID: ";
	cin >> student.lineid;

	cout << "Mobile number: ";
	cin >> student.myContact.mobile;

	cout << "Home number: ";
	cin >> student.myContact.home;

	cout << "Parent's name: ";
	cin >> student.myParent.name;

	cout << "Relationship: ";
	cin >> student.myParent.relationship;

	cout << "Parent's mobile number: ";
	cin >> student.myParent.contact.mobile;

	cout << "Parent's home number: ";
	cin >> student.myParent.contact.home;

}


void printStudent(const Student &student) {
	cout << "\n=====Student Information =====\n";
	cout << "ID: " << student.id << endl;
	cout << "Nickname: " << student.nickname << endl;
	cout << "Line ID: " << student.lineid << endl;
	cout << "Mobile phone: " << student.myContact.mobile << endl;
	cout << "My Parent's name: " << student.myParent.name << endl;
	cout << "My Parent's relationship: " << student.myParent.relationship << endl;
	cout << "My Parent's mobile phone: " << student.myParent.contact.mobile << endl;
	cout << "My Parent's home phone: " << student.myParent.contact.home << endl;
}



int main() {
    Student Student;
	inputStudent(Student);
	printStudent(Student);

    return 0;
}
