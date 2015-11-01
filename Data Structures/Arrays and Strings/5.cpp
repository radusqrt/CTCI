#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void compress(string &s)
{
	string s2;
	int l = s.size();

	for(int i = 0; i < l; ++i)
	{
		char c = s[i];
		int count = 0;
		while(c == s[i])
			count++, i++;
		s2 += c;
		s2 += ('0' + count);
		i--;
	}
	if(s2.size() < l)
		s = s2;
}

int main()
{
	string s;
	cin >> s;
	compress(s);
	cout << s << "\n";
	return 0;
}