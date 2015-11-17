#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	int **a, i, j, n;
	cin >> n;
	bool *row = new bool[n]();
	bool *column = new bool[n]();
	a = new int* [n];
	for(i = 0; i < n; ++i)
		a[i] = new int[n];

	for(i = 0; i < n; ++i)
		for(j = 0; j < n; ++j)
		{
			cin >> a[i][j];
			if(a[i][j] == 0)
				row[i] = true, column[j] = true;
		}

	for(i = 0; i < n; ++i)
	{
		for(j = 0; j < n; ++j)
			row[i] == true || column[j] == true ? printf("0 ") : printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}