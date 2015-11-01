#include <stdio.h>
#include "Node.h"

using namespace std;

void deleteNode(Node *aux)
{
	aux->data = aux->next->data;
	Node *aux2 = aux->next->next;
	delete aux->next;
	aux->next = aux2;
}

int main()
{
	int n, k;
	cin >> n;
	Node *first = new Node();
	first->read(n);
	
	Node *aux = first->next->next;
	deleteNode(aux);

	first->print();

	return 0;
}