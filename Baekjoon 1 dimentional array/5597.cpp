#include <iostream>

using namespace std;

int main()
{
	int n;
	int array1[30];
	int array2[28];
	int array3[2];

	for (int i = 0; i < 30; i++)
	{
		array1[i] = i + 1;
	}
	
	for (int i = 0; i < 28; i++)
	{
		cin >> n;
		while (n > 30 || n < 1)
			cin >> n;
		array2[i] = n;
		for (int j = 0; j < i; j++)
		{
			if (array2[i] == array2[j])
			{
				i--;
				break;
			}
		}
	}

	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 28; j++)
		{
			if (array1[i] == array2[j])
				array1[i] = 0;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (array1[j] != 0)
			{
				array3[i] = array1[j];
				array1[j] = 0;
				break;
			}
		}
	}

	for (int i = 0; i < 2; i++)
		cout << array3[i] << endl;

	return 0;
}