//เขียนฟังก์ชัน swap Value เพื่อสลับค่าตัวแปร aและb โดยใช้ pointer

#include <iostream>
using namespace std;

void swapValue(int* x, int* y) {
	//TODO:สลับค่าด้วย pointer
	int temp = *x;
	*x = *y;
	*y = temp;



}

int main() {
	int a, b;
	cin >> a >> b;
	//swapValue(#####);
	swapValue(&a,&b);

	cout << a << "  " << b;

	return 0;
}