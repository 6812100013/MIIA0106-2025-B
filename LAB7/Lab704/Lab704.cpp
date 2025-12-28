// TODO: แสดงค่าทุกตัวใน array โดยใช้ pointer เท่านั้น
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40 };
    int* p = arr;

    // TODO


	cout << *p << endl;    // 10
	cout << *(p + 1) << endl; // 20
	cout << *(p + 2) << endl; // 30
	cout << *(p + 3) << endl; // 40


	for (int i = 0; i < 4; i++) 
	{
		cout << *(p + i) << endl;
	}





    return 0;
}
