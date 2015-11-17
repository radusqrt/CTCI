enum Color
{
	Club, Diamond, Heart, Spade
};

class Card
{
	Color c;
	int number;
public:
	Card() {}
	Card(Color c, int number)
	{
		this->c = c;
		this->number = number;
	}

	void setColor(Color c)
	{
		this->c = c;
	}

	void setNumber(int number)
	{
		this->number = number;
	}
};