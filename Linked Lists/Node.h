#include <cstddef>
#include <iostream>

class Node
{
public:
	int data;
	Node *next;

	Node()
	{
		next = NULL;
	}

	Node(int data)
	{	
		Node();
		this->data = data;
	}

	void read(int n)
	{
		int data;
		if(n == 0) return;
		std::cin >> data;
		this->data = data;
		n--;
		if(n > 0)
		{
			Node *aux = new Node();
			next = aux;
			aux->read(n);
		}
	}

	void print()
	{
		std::cout << data << " ";
		if(next != NULL)
			next->print();
	}

	Node* takeLast()
	{
		if(next != NULL) return next->takeLast();
		return this;
	}
};

void readList(Node *first, int n)
{
	int data;
	if(n == 0) return;
	std::cin >> data;
	first = new Node(data);

	Node *next = NULL;
	first->next = next;
	readList(next, n-1);
}