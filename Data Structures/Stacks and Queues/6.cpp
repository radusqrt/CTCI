#include "Stack.h"
#include <iostream>

using namespace std;

void sort(Stack <int> &s)
{
	Stack <int> aux;
	while(!s.isEmpty())
	{
		if(aux.isEmpty())
			aux.push(s.pop());
		else
			if(s.peek() < aux.peek())
				aux.push(s.pop());
			else
			{
				int x = s.pop();
				while(!aux.isEmpty() && aux.peek() < x)
					s.push(aux.pop());
				s.push(x);
			}
	}

	while(!aux.isEmpty())
		s.push(aux.pop());
}

int main()
{
	int n, x;
	Stack <int> s;
	cin >> n;
	while(n--)
		cin >> x, s.push(x);

	sort(s);
	while(!s.isEmpty())
		cout << s.pop() << "\n";
	return 0;
}