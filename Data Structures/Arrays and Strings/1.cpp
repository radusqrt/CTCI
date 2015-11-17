#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

bool isUnique(string s)
{
	bool exists[27];
	for(int i = 0; i < 27; ++i)
		exists[i] = 0;
	
	int length = s.size();
	for(int i = 0; i < length; ++i)
		if(exists[s[i] - 'a'] == true) return false;
		else exists[s[i] - 'a'] = true;
	return true;
}

int main()
{
	string s;
	cin >> s;
	isUnique(s) ? printf("YES\n") : printf("NO\n");
	return 0;
}