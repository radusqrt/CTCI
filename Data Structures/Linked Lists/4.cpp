#include <stdio.h>
#include "Node.h"

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	Node *first = new Node();
	first->read(n);
	
	Node *beforeFirst = NULL, *beforeLast = NULL, *afterFirst = NULL, *afterLast = NULL;
	while(first != NULL)
	{
		if(first->data < x)
			if(beforeLast == NULL)
			{
				beforeLast = new Node(first->data);
				beforeFirst = beforeLast;
			}
			else
			{
				Node *aux = new Node(first->data);
				beforeLast->next = aux;
				beforeLast = aux;
			}
		else
			if(afterLast == NULL)
			{
				afterLast = new Node(first->data);
				afterFirst = afterLast;
			}
			else
			{
				Node *aux = new Node(first->data);
				afterLast->next = aux;
				afterLast = aux;
			}
		first = first->next;
	}

	beforeLast->next = afterFirst;

	beforeFirst->print();

	return 0;
}