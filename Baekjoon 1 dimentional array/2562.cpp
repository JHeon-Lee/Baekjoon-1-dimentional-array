#include <iostream>

using namespace std;

int main()
{
	int array[9];
	int max, max_index;

	for (int i = 0; i < 9; i++)
	{
		cin >> array[i];
		while (array[i] >= 100 || array[i] < 1)
			cin >> array[i];
	}

	max = array[0];
	max_index = 1;
	for (int i = 0; i < 9; i++)
	{
		if (max < array[i])
		{
			max = array[i];
			max_index = i + 1;
		}
	}

	cout << max << endl;
	cout << max_index;

	return 0;
}