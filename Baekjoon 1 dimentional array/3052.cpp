#include <iostream>

using namespace std;

int main()
{
	int num;
	int output_array[10];
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		while (num > 1000 || num < 0)
			cin >> num;
		output_array[i] = num % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (output_array[i] == output_array[j])
			{
				count++;
				break;
			}
		}
	}

	cout << 10 - count;

	return 0;
}