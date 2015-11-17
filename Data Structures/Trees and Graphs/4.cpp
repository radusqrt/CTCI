#include <iostream>
#include "BinaryTreeNode.h"
#include <list>

using namespace std;

void formLists(BinaryTreeNode *root, int depth, list <int> *lists)
{
	lists[depth].push_back(root->data);
	if(root->left != NULL)
		formLists(root->left, depth + 1, lists);
	if(root->right != NULL)
		formLists(root->right, depth + 1, lists);
}

int main()
{
	int n;
	list <int> *lists;
	BinaryTreeNode *a = new BinaryTreeNode(1);
	BinaryTreeNode *b = new BinaryTreeNode(2);
	BinaryTreeNode *c = new BinaryTreeNode(3);
	BinaryTreeNode *d = new BinaryTreeNode(4);
	BinaryTreeNode *e = new BinaryTreeNode(5);
	BinaryTreeNode *f = new BinaryTreeNode(6);
	BinaryTreeNode *g = new BinaryTreeNode(7);
	a->left = b;
	b->left = d;
	d->right = e;
	a->right = c;
	c->right = f;

	BinaryTreeNode *root = a;

	lists = new list <int> [100];

	formLists(root, 0, lists);

	for(int i = 0; i < 4; ++i)
	{
		for(list<int>::iterator it = lists[i].begin(); it != lists[i].end(); ++it)
			cout << *it << " ";
		cout << "\n";
	}

	delete[] lists;
	return 0;
}