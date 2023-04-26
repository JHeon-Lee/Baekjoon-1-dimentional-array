#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	while ((n > 100 || n < 1) || (m > 100 || m < 1))
		cin >> n >> m;

	int* pArray = new int[n];
	for (int i = 0; i < n; i++)
	{
		pArray[i] = 0;
	}

	int index1, index2, number;
	for (int i = 0; i < m; i++)
	{
		cin >> index1 >> index2 >> number;
		while ((index1 > n || index1 < 1) || (index2 > n || index2 < 1 || index1>index2) || (number > n || number < 1))
			cin >> index1 >> index2 >> number;
		for (int j = index1 - 1; j <= index2 - 1; j++)
		{
				pArray[j] = number;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << pArray[i] << " ";
	}

	delete[] pArray;

	return 0;
}