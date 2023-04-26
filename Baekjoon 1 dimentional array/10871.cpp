#include <iostream>

using namespace std;

int main()
{
	int n, x;
	int array[10000];

	cin >> n >> x;
	while ((n > 10000 || n < 1) || (x > 10000 || x < 1))
		cin >> n >> x;

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
		while (array[i] > 10000 || array[i] < 1)
			cin >> array[i];
		if (array[i] < x)
			cout << array[i] << " ";
	}

	return 0;
}