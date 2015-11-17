#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	string s;
	int k, index = 0;

	cin >> k;
	string v[k];
	// cout << argv[1];

	ifstream f(argv[1]);
	while(getline(f, s))
	{
		v[index++] = s;
		index %= k;
	}

	for(int i = 0; i < k; ++i)
		cout << v[i] << "\n";

	return 0;
}