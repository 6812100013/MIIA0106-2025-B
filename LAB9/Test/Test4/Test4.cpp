
#include <iostream>

using namespace std;

int main() {
	const int N = 5;
	int id[N];
	//TODO:รับค่ารหัสนักศึกษา 5 ค่า
	for (int i = 0; i < N; i++)
	{
		cout << "Enter Student ID " << (i + 1) << ":";
		cin >> id[i];
	}
	//TODO:เรียงข้อมูลจากน้อยไปมาก (Bubble Sort) ไม่ต้องเขียนฟังก์ชันแยก ให้เขียนใน main
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (id[j] > id[j + 1])
			{
				int temp = id[j];
				id[j] = id[j + 1];
				id[j + 1] = temp;

			}
		}
	}

	//TODO:แสดงผลลัพธ์ที่เรียงแล้ว
	for (int i = 0; i < N; i++)
	{
		cout << id [i] << "\n";

	}


	return 0;
}