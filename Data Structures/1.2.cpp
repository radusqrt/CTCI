#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

bool isUnique(string s)
{
	int length = s.size();
	for(int i = 0; i < length - 1; ++i)
		for(int j = i + 1; j < length; ++j)
			if(s[i] == s[j]) return false;
	return true;
}

int main()
{
	string s;
	cin >> s;
	isUnique(s) ? printf("YES\n") : printf("NO\n");
	return 0;
}