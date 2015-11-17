#include <iostream>
#include "Node.h"

using namespace std;

int main()
{
	int n, data;
	cin >> n;
	cin >> data;
	Node *root = new Node(data);

	n--;
	while(n--)
	{
		cin >> data;
		root->add(data);
	}

	cout << root->find(25);

	return 0;
}