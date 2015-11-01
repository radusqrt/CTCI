#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void removeSpaces(string &s)
{
	string s2;
	int length = s.size();
	for(int i = 0; i < length; ++i)
		if(s[i] != ' ')
			s2 += s[i];
		else
		{
			s2 += "%20";
			while(s[i] == ' ') i++;
			i--;
		}
	s = s2;
}

int main()
{
	string s = "Radu are spatii";
	removeSpaces(s);
	cout << s << "\n";
	return 0;
}