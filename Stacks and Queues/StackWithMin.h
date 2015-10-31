#ifndef _STACK_H
	#include "Stack.h"
#endif
#include "NodeWithMin.h"

inline int minim(int a, int b)
{
	if (a < b) return a;
	return b;
}

class StackWithMin : public Stack<NodeWithMin>
{

public:
	StackWithMin() : Stack<NodeWithMin>() {}
	StackWithMin(int size) : Stack<NodeWithMin>(size) {}

	void push(int other)
	{
		if(current == size)
		{
			doubleArraySize();
			array[current] = NodeWithMin(other, minim(other, array[current-1].getMin())), current++;
		}
		else
			if(current == 0)
				array[current++] = NodeWithMin(other, other);
			else
				array[current] = NodeWithMin(other, minim(other, array[current-1].getMin())), current++;

	}

	int peek() {return array[current-1].getValue();}
	int pop() {return array[(current--)-1].getValue();}
	int getMin() {return array[current-1].getMin();}

};