#include "Queue.h"
#include <iostream>

int main()
{
	Queue <int> q;
	for(int i = 0; i < 10; ++i)
		q.push(i);
	for(int i = 0; i < 5; ++i)
		std::cout << q.pop() << "\n";
	for(int i = 10; i < 20; ++i)
		q.push(i);
	while(!q.isEmpty())
		std::cout << q.pop() << "\n";
	for(int i = 0; i < 1000; ++i)
		q.push(i);
	return 0;
}