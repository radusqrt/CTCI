#include <iostream>
#include <string>

using namespace std;

string toBinary(float x)
{
	string s;
	int i = 0;
	while(i < 32)
	{
		x *= 2;
		if(x >= 1)
			s += "1", x -= 1;
		else
			s += "0";
		i++;
	}

	if(x > 0)
		return "ERROR\n";
	return s;
}

int main()
{
	float x;
	cin >> x;

	string s = toBinary(x);
	cout << s;

	return 0;
}