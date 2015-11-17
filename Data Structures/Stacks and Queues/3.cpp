#include "SetOfStacks.h"
#include <iostream>
using namespace std;

int main()
{
	SetOfStacks s(3);
	for(int i = 0; i < 10; ++i)
	{	
		cout << i << " ";
		s.push(i);
		cout << "\n";
	}

	cout << s.popAt(0);
	cout << s.popAt(1);
	cout << s.popAt(0);
	s.push(9);
	cout << s.popAt(0);
	return 0;
}