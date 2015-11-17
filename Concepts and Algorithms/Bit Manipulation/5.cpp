#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	n ^= m;

	// cout << n << "\n";
	int count = 0;
	while(n)
		n &= (n-1), count++;

	cout << count << "\n";
	return 0;
}