#include <iostream>

using namespace std;

int main()
{
	int n;
	unsigned int mask = 0b01010101010101010101010101010101;
	unsigned int mask2 = 0b10101010101010101010101010101010;

	cout << mask2 << "\n";

	cin >> n;
	int m = (n & mask) << 1;
	int k = (n & mask2) >> 1;
	n = m | k;

	cout << n << "\n";
	return 0;
}