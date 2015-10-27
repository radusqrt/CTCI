#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

void reverse(char *s)
{
	char aux;
	int length = strlen(s);
	for(int i = 0; i < length / 2; ++i)
	{
		aux = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = aux;
	}
}

int main()
{
	char* s = new char[100];
	cin >> s;
	reverse(s);
	cout << s;
	delete[] s;
	return 0;
}