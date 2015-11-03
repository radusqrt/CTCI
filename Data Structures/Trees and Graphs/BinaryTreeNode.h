#include <cmath>
#include <cstddef>

int max(int a, int b)
{
	if(a>b) return a;
	return b;
}

class BinaryTreeNode
{
public:
	int data;
	BinaryTreeNode *right, *left;

	BinaryTreeNode(){}

	BinaryTreeNode(int data)
	{
		this->data = data;
	}

	bool isBalanced()
	{
		return (std::abs(left->height() - right->height()) < 2);
	}

	int height()
	{
		if(left == NULL && right == NULL) return 1;
		if(left == NULL) return (right->height() + 1);
		if(right == NULL) return (left->height() + 1);
		return (max(left->height(), right->height()) + 1);
	}

	void inOrderPrint()
	{
		if(left)
			left->inOrderPrint();
		std::cout << data << " ";
		if(right)
			right->inOrderPrint();
	}
};