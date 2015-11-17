#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void rotate(int **a, int n)
{
	int upperRight_X, upperRight_Y, upperLeft_X, upperLeft_Y;
	int bottomLeft_X, bottomLeft_Y, bottomRight_X, bottomRight_Y;
	int aux, i, ref;
	for(int i = 0; i < n / 2; ++i)
	{
		upperLeft_X = i;
		upperLeft_Y = i;
		upperRight_X = i;
		upperRight_Y = n - 1 - i;
		bottomRight_X = n - 1 - i;
		bottomRight_Y = n - 1 - i;
		bottomLeft_X = n - 1 - i;
		bottomLeft_Y = i;

		ref = upperLeft_X;
		while(bottomLeft_X != ref)
		{
			aux = a[upperLeft_X][upperLeft_Y];
			a[upperLeft_X][upperLeft_Y] = a[bottomLeft_X][bottomLeft_Y];
			a[bottomLeft_X][bottomLeft_Y] = a[bottomRight_X][bottomRight_Y];
			a[bottomRight_X][bottomRight_Y] = a[upperRight_X][upperRight_Y];
			a[upperRight_X][upperRight_Y] = aux;
			upperLeft_Y++;
			upperRight_X++;
			bottomRight_Y--;
			bottomLeft_X--;
		}
	}
}

int main()
{
	int **a, i, j, n;
	cin >> n;
	a = new int* [n];
	for(i = 0; i < n; ++i)
		a[i] = new int[n];

	for(i = 0; i < n; ++i)
		for(j = 0; j < n; ++j)
			cin >> a[i][j];

	rotate(a, n);

	for(i = 0; i < n; ++i)
	{
		for(j = 0; j < n; ++j)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}