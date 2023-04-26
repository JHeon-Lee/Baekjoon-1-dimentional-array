#include <iostream>

using namespace std;

int main()
{
	int num, v;
	int array[100];
	int count = 0;

	cin >> num;
	while (num > 100 || num < 1)
		cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> array[i];
		while (array[i] > 100 || array[i] < -100)
			cin >> array[i];
	}

	cin >> v;
	while (v > 100 || v < -100)
		cin >> v;

	for (int i = 0; i < num; i++)
	{
		if (array[i] == v)
			count++;
	}

	cout << count << endl;

	return 0;
}