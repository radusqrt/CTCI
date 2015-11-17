#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

bool isBinarySearchTree(BinaryTreeNode *root)
{
	if(root->left != NULL)
		if(root->left->data > root->data) return false;
	if(root->right != NULL)
		if(root->right->data < root->data) return false;
	if(root->left != NULL && root->right != NULL)
		return isBinarySearchTree(root->left) && isBinarySearchTree(root->right);
	if(root->left != NULL)
		return isBinarySearchTree(root->left);
	if(root->right != NULL)
		return isBinarySearchTree(root->right);
	return true;

}

int main()
{
	BinaryTreeNode *a = new BinaryTreeNode(5);
	BinaryTreeNode *b = new BinaryTreeNode(1);
	BinaryTreeNode *c = new BinaryTreeNode(6);
	BinaryTreeNode *d = new BinaryTreeNode(2);
	BinaryTreeNode *e = new BinaryTreeNode(3);
	BinaryTreeNode *f = new BinaryTreeNode(7);
	// BinaryTreeNode *g = new BinaryTreeNode(7);
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
	BinaryTreeNode *root = a;

	isBinarySearchTree(root) ? cout << "YES\n" : cout << "NO\n";
	return 0;
}