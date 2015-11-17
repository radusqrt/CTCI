#include "Stack.h"

template < class T >
class Queue
{
	Stack <T> s1, s2;

public:
	void push(T other)
	{
		s1.push(other);
	}

	T pop()
	{
		if(!s2.isEmpty())
			return s2.pop();
		while(!s1.isEmpty())
			s2.push(s1.pop());
		return s2.pop();
	}

	bool isEmpty() {return s1.isEmpty() && s2.isEmpty();}
};