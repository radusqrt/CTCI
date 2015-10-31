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

void reverse(Node *node)
{
	if(node->next != NULL)
		reverse(node->next);
	if(node->next != NULL)
		node->next->next = node;
}

Node *copy(Node *first2)
{
	Node *first = new Node(first2->data);
	Node *last = first;
	first2 = first2->next;
	while(first2 != NULL)
	{
		Node *aux = new Node(first2->data);
		last->next = aux;
		last = aux;
		first2 = first2->next;
	}
	return first;
}

int main()
{
	int n;

	cin >> n;
	Node *first2 = new Node();
	first2->read(n);
	Node *first = copy(first2);

	Node* last = first->takeLast();

	reverse(first);
	first->next = NULL;

	Node *slowRunner = last, *fastRunner = last;

	bool ok = true;
	while(fastRunner != NULL && fastRunner->next != NULL && ok)
	{
		if(slowRunner->data != first2->data) ok = false;
		slowRunner = slowRunner->next;
		fastRunner = fastRunner->next->next;
		first2 = first2->next;
	}

	ok == true ? printf("YES\n") : printf("NO\n");

	return 0;
}