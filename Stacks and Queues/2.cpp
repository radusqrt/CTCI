#include <iostream>
#include "StackWithMin.h"

using namespace std;

int main()
{
	StackWithMin s(1);
	s.push(3);
	s.push(10);
	s.push(26);
	cout << s.getMin() << "\n";
	s.push(1);
	cout << s.getMin() << "\n";
	s.pop();
	cout << s.getMin() << "\n";
	s.push(1);
	s.push(100);
	cout << s.getMin() << "\n";
	return 0;
}