#include <iostream>

using namespace std;

int main()
{
	int n;
	int max, min;
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;
	while (n > 1000000 || n < 1)
		cin >> n;

	int* pArray = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> pArray[i];
		while (pArray[i] > 1000000 || pArray[i] < -1000000)
			cin >> n;
	}

	max = pArray[0];
	for (int i = 0; i < n; i++)
	{
		if (max < pArray[i])
			max = pArray[i];
	}

	min = pArray[0];
	for (int i = 0; i < n; i++)
	{
		if (min > pArray[i])
			min = pArray[i];
	}

	cout << min << " " << max;

	delete[] pArray;

	return 0;
}

// 1차원 배열의 동적할당 방법