#include <stdio.h>
#include "Node.h"

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	k--;
	Node *first = new Node();
	first->read(n);
	
	Node *kth = first;
	while(k--)
		kth = kth->next;

	while(kth->next != NULL)
		kth = kth->next, first = first->next;

	cout << first->data << "\n";

	return 0;
}