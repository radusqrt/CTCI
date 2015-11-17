#include <iostream>

using namespace std;

void maximalSequence(int a[], int size)
{
	int i, j, p = -1, max = 0;
	int *P = new int[size]();
	for(i = size - 1; i >= 0; --i)
	{
		P[i] = 1;
		for(j = i + 1; j < size; ++j)
			if(a[j] > a[i] && P[j] + 1 > P[i])
			{
				P[i] = P[j] + 1;
				if(max < P[i]) max = P[i];
			}
	}

	delete[] P;
	cout << max << "\n";
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i)
		cin >> a[i];

	maximalSequence(a, n);
	return 0;
}