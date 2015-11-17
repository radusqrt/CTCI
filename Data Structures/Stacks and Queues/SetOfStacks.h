#include "Stack.h"
#include <vector>

class SetOfStacks
{
	int limit;
	int current = 0;
	std::vector <Stack <int> > set;

public:

	SetOfStacks()
	{
		limit = 2;
		current = 0;
	}

	SetOfStacks(int limit) : SetOfStacks()
	{
		this->limit = limit;
	}

	void push(int other)
	{
		int ok = 0;
		for(int i = 0; i < current && !ok; ++i)
			if(set[i].getSize() < limit)
				set[i].push(other), ok = 1;

		if(!ok)
		{
			std::cout << "New stack\n";
			Stack <int> s;
			s.push(other);
			set.push_back(s);
			current++;
		}
	}

	int peek() {return set[current].peek();}
	int pop() {return set[current].pop();}
	int popAt(int index) {return set[index].pop();}


};