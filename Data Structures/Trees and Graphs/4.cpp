#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

int main()
{
	int n, a[100];

	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	BinaryTreeNode *node = divide(0, n-1, a);
	node->inOrderPrint();
}