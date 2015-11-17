#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

BinaryTreeNode* divide(int left, int right, int a[])
{
	if(left <= right)
	{
		int m = (left + right) / 2;
		BinaryTreeNode* newNode = new BinaryTreeNode(a[m]);
		newNode->left = divide(left, m-1, a);
		newNode->right = divide(m+1, right, a);
		return newNode;
	}
	else
		return NULL;
}

int main()
{
	int n, a[100];

	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	BinaryTreeNode *node = divide(0, n-1, a);
	node->inOrderPrint();
}