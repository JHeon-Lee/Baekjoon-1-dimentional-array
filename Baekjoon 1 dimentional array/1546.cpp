#include <iostream>

using namespace std;

int main()
{
	int n, m;
	double max, average;
	double sum = 0;

	cin >> n;
	while (n > 1000 || n < 1)
		cin >> n;

	double* pArray = new double[n];
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		while (m > 100 || m < 0)
			cin >> m;
		pArray[i] = m;
	}

	max = pArray[0];
	for (int i = 0; i < n; i++)
	{
		if (max < pArray[i])
		{
			max = pArray[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		pArray[i] = pArray[i] / max * 100;
	}

	for (int i = 0; i < n; i++)
	{
		sum += pArray[i];
	}

	average = sum / n;

	cout << average;

	delete[] pArray;

	return 0;
}