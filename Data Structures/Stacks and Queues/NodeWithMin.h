class NodeWithMin
{
	int value;
	int minElement;

public:
	
	NodeWithMin(){}

	NodeWithMin(int value, int minElement)
	{
		this->value = value;
		this->minElement = minElement;
	}

	int getValue() {return value;}
	int getMin() {return minElement;}
};