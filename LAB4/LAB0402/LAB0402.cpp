#include <iostream>
#include <string>



using namespace std;

int main()
{
	for (int i = 0;
		i < 10;
		i++)

	{
		cout << "hello \n";
	}

	int j = 0;
	while (j < 10)
	{
		cout << "hello" << j << "\n";
		j++; // j= j+1; j +=1

	} 

	cout << "------ start do while ----\n";

	int k = 0;
	do
		{
		cout << "hello " << k << "\n";
		k++;
	} while (k < 10);



	return 1;






}