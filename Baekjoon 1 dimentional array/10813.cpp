#include <iostream>

using namespace std;

int main()
{
	int n, m;
	int a, b;

	cin >> n >> m;
	while ((n > 100 || n < 1) || (m > 100 || m < 1))
		cin >> n >> m;

	int* pArray = new int[n];
	for (int i = 0; i < n; i++)
	{
		pArray[i] = i + 1;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		while ((a > n || a < 1) || (b > n || b < 1))
			cin >> a >> b;
		int temp = pArray[a - 1];
		pArray[a - 1] = pArray[b - 1];
		pArray[b - 1] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << pArray[i] << " ";
	}

	delete[] pArray;

	return 0;
}