#include <stdio.h>
#include "Node.h"

using namespace std;

Node* findCycle(Node *first)
{
	Node *slowRunner = first->next;
	Node *fastRunner = first->next->next;
	while(slowRunner != fastRunner)
	{
		slowRunner = slowRunner->next;
		fastRunner = fastRunner->next->next;
	}

	slowRunner = first;
	while(slowRunner != fastRunner)
	{
		slowRunner = slowRunner->next;
		fastRunner = fastRunner->next;
	}

	return slowRunner;
}

int main()
{
	Node *A = new Node(1);
	Node *B = new Node(2);
	Node *C = new Node(3);
	Node *D = new Node(4);
	Node *E = new Node(5);
	Node *F = new Node(6);
	Node *G = new Node(7);
	Node *H = new Node(8);
	A->next = B;
	B->next = C;
	C->next = D;
	D->next = E;
	E->next = F;
	F->next = G;
	G->next = H;
	H->next = D;

	Node *aux = findCycle(A);
	cout << aux->data;

	return 0;
}