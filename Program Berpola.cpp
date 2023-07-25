#include <iostream>
using namespace std;

int main()
{

	int bilangan;
	int i;
	int j;
	int k = 0;

	cout << "Masukkan bilangan untuk pola : ";
	cin >> bilangan;

	for (i = 1; i <= bilangan; i++)
	{

		for (j = 1; j <= i; j++)
		{
			if (k == 10)
				k = 0;

			cout << k << " ", k++;
		}

		cout << endl;
	}

	return 0;
}
