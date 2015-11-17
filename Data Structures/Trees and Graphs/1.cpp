#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

int main()
{
	BinaryTreeNode *a = new BinaryTreeNode(1);
	BinaryTreeNode *b = new BinaryTreeNode(2);
	BinaryTreeNode *c = new BinaryTreeNode(3);
	BinaryTreeNode *d = new BinaryTreeNode(4);
	BinaryTreeNode *e = new BinaryTreeNode(4);
	a->left = b;
	a->right = c;
	b->left = d;
	// d->right = e;

	if(a->isBalanced()) cout << "Balanced\n";
	else cout << "Unbalanced.\n";

	a->inOrderPrint();
}