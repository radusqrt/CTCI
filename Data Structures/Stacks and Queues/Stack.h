#define _STACK_H
#include <iostream>

template < class T >
class Stack
{

protected:
	int size;
	int current;
	T *array;

public:
	Stack()
	{
		current = 0;
		size = 10;
		array = new T[size];
	}

	Stack(int size)
	{
		if(size < 1) size = 1;

		current = 0;
		this->size = size;
		array = new T[size];
	}

	void push(T other)
	{
		if(current == size)
			doubleArraySize();
		array[current++] = other;
	}

	T peek()
	{
		if(current > 0)
			return array[current-1];
		else
			return T(0);
	}

 	T pop() 
 	{
 		if(current > 0)
	 		return array[(current--) - 1];
	 	else
	 		return T(0);
	}
 	bool isEmpty() {return (current == 0);}
 	int getSize() {return current;}

 	void doubleArraySize()
 	{
 		std::cout << "Doubling from " << size << " to " << 2*size << "\n";
 		T *auxArray = new T[2 * size];
 		for(int i = 0; i < size; ++i)
 			auxArray[i] = array[i];

 		size *= 2;

 		delete[] array;
 		array = auxArray;
 	}

};