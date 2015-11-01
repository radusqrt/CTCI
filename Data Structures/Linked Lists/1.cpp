#include <stdio.h>
#include "Node.h"

using namespace std;

int main()
{
	int n, *visited = new int[100]();
	cin >> n;
	Node *first = new Node();
	first->read(n);
	visited[first->data] = 1;
	Node* aux = first;
	first->print();
	cout << "\n";
	while(aux->next->next != NULL)
		if(visited[aux->next->data] == 1)
		{
			Node *aux2 = aux->next;
			aux->next = aux2->next;
			delete aux2;
		}
		else
			visited[aux->next->data] = 1, aux = aux->next;
	if(visited[aux->next->data] == 1)
	{
		delete aux->next;
		aux->next = NULL;
	}

	first->print();
	cout << "\n";

	while(first != NULL)
	{
		Node *aux = first->next;
		delete first;
		first = aux;
	}

	delete[] visited;

	return 0;
}