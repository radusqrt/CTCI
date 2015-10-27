#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

bool isPermutation(string s, string s2)
{
	if(s.size() != s2.size()) return false;

	int freq[1000], freq2[1000];
	for(int i = 0; i < 1000; ++i)
		freq[i] = 0, freq2[i] = 0;

	for(int i = 0; i < s.size(); ++i)
		freq[(int)s[i]]++;
	
	for(int i = 0; i < s2.size(); ++i)
		freq2[(int)s2[i]]++;

	for(int i = 0; i < 1000; ++i)
		if(freq[i] != freq2[i]) return false;

	return true;
}

int main()
{
	string s, s2;
	cin >> s >> s2;
	isPermutation(s, s2) ? printf("YES\n") : printf("NO\n");
	return 0;
}