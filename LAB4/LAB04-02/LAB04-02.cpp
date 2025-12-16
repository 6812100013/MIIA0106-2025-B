#include <iostream>
#include <string>

using namespace std;

int main()
{


	cout << " ----- Sum ---- \n";
	int count, num;
	count = 0;
	for (num = 1; num <= 100; num++)
	{

		{
			count = count + num;

		}
	}
	cout << count << "\n";

	return 1;
}