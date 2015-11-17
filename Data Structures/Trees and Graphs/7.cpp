#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

BinaryTreeNode* commonAncestor(BinaryTreeNode* a, BinaryTreeNode* b)
{
	int l1 = a->distanceToRoot();
	int l2 = b->distanceToRoot();
	if(l1 > l2)
	{
		l1 -= l2;
		while(l1--)
			a = a->parent;
	}
	else if(l2 > l1)
	{
		l2 -= l1;
		while(l2--)
			b = b->parent;
	}
	while(a != b)
		a = a->parent, b = b->parent;

	return a;
}

int main()
{
	BinaryTreeNode *a = new BinaryTreeNode(5);
	BinaryTreeNode *b = new BinaryTreeNode(1);
	BinaryTreeNode *c = new BinaryTreeNode(7);
	BinaryTreeNode *d = new BinaryTreeNode(2);
	BinaryTreeNode *e = new BinaryTreeNode(3);
	BinaryTreeNode *f = new BinaryTreeNode(8);
	BinaryTreeNode *g = new BinaryTreeNode(6);
	a->left = b;
	b->parent = a;
	b->left = d;
	d->parent = b;
	d->right = e;
	e->parent = d;
	a->right = c;
	c->parent = a;
	c->right = f;
	f->parent = c;
	c->left = g;
	g->parent= c;
	BinaryTreeNode *node = commonAncestor(g, d);
	cout << node->data << "\n";	
	return 0;
}