#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

bool isSubstring(string s1, string s2)
{
	string S1 = s1 + s1;
	string S2 = s2 + s2;
	return (S1.find(s2) != -1 && S2.find(s1) != -1);
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	isSubstring(s1, s2) ? printf("YES\n") : printf("NO\n");
	return 0;
}