// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()

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
	cout << "=== Input Student ===\n";
	// TODO: s1.input();
	s1.input();

	cout << "\n=== Student Info ===\n";
	// TODO: s1.print();
	s1.print();
	cout << "BMI: " << s1.calcBMI() << endl;


	return 0;
}
