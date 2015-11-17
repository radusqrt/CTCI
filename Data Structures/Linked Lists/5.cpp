#include <stdio.h>
#include "Node.h"

using namespace std;

Node* add(Node *n1, Node *n2)
{
	int t, data;
	Node *first, *last;

	data = (n1->data + n2->data) % 10;
	t = (n1->data + n2->data) / 10;
	first = new Node(data);
	last = first;
	n1 = n1->next;
	n2 = n2->next;

	while(n1 != NULL && n2 != NULL)
	{
		data = (n1->data + n2->data + t) % 10;
		t = (n1->data + n2->data + t) / 10;
		Node *aux = new Node(data);
		last->next = aux;
		last = aux;
		n1 = n1->next;
		n2 = n2->next;
	}

	while(n1 != NULL)
	{
		data = (n1->data + t) % 10;
		t = (n1->data + t) / 10;
		Node *aux = new Node(data);
		last->next = aux;
		last = aux;
		n1 = n1->next;
	}

	while(n2 != NULL)
	{
		data = (n2->data + t) % 10;
		t = (n2->data + t) / 10;
		Node *aux = new Node(data);
		last->next = aux;
		last = aux;
		n2 = n2->next;
	}

	return first;
}

int main()
{
	int n, n2;

	cin >> n;
	Node *first = new Node();
	first->read(n);

	cin >> n2;
	Node *first2 = new Node();
	first2->read(n2);
	
	Node *result = add(first, first2);

	// first->print();
	// first2->print();
	result->print();

	return 0;
}