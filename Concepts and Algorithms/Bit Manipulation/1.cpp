#include <iostream>

using namespace std;

void clearBit(int &n, int i)
{
	int mask = ~(1 << i);
	n &= mask;
}

int main()
{
	int n, m, i, j;

	cin >> n >> m >> i >> j;

	for(int k = i; k <= j; ++k)
		clearBit(n, k);

	m = m << i;

	n |= m;
	cout << n << "\n";

	return 0;
}