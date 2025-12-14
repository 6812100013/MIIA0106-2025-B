#include <iostream>;
#include <string>;

using namespace std;

int main()
{
	cout << " ---- Start for ---- \n";
	for (int i = 1;
		i <= 10;
		i++)

	{
		if (i % 1 == 0)
			cout << i << "\n";

	}

	cout << " ----- Start for While ---- \n";
	int j = 1;
	while (j < 11)
	{
		cout << j << "\n";
		j++;
	}

	cout << " ----- Start do while ---- \n";
	int k = 1;
	do
	{
		cout << k << "\n";
		k++;
	} while (k < 11);


	cout << " ----- Sum ---- \n";
	int count, num;
	count = 0;
	for (num = 1; num < 100; num++)
	{

		{
			count = count + num;

		}
	}
	cout << count << "\n";



	cout << "---for ---\n";
	for (int l = 1;
		l > 1;
		l--)

	{
	}












	return 1;
}