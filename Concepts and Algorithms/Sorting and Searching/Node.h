class Node
{
public:
	Node *left, *right;
	int leftSize, data;

	Node()
	{
		leftSize = 0;
	}
	Node(int data) : Node()
	{
		this->data = data;
	}

	void add(int data)
	{
		if(data > this->data)
			if(right != NULL)
				right->add(data);
			else
				right = new Node(data);
		else
		{
			leftSize++;
			if(left != NULL)
				left->add(data);
			else
				left = new Node(data);
		}
	}

	int find(int key)
	{
		// std::cout << data << " " << leftSize << "\n";
		if(key < data)
			if(left != NULL)
				return leftSize;
			else
				return -1;
		else if(key == data) return leftSize;
		else
		{
			// std::cout << "YA";
			if(right != NULL)
			{
				int x = right->find(key);
				// std::cout << "RIGHT: " << x << "\n";
				return leftSize + x;
			}
			else
				return leftSize;
		}
	}
};