#include "Card.h"
#include <stdlib.h>
#include <time.h>

class Deck
{
	Card *deck;

public:
	Deck()
	{
		deck = new Card[52];
		for(int j = 0; j < 4; ++j)
		{
			Color c;
			if(j == 0) c = Club;
			else if(j == 1) c = Diamond;
			else if(j == 2) c = Heart;
			else c = Spade;
			
			for(int i = 2; i < 15; ++i)
			{
				deck[j*13 + i - 2].setColor(c);
				deck[j*13 + i - 2].setNumber(i);
			}
		}
	}
	~Deck()
	{
		delete[] deck;
	}

	void shuffle()
	{
		srand(time(NULL));
		bool *visited = new bool[52]();
		for(int i = 0; i < 26; ++i)
		{
			int x, y;
			do
			{
				x = rand() % 52;
			}
			while(visited[x] == true);
			do
			{
				y = rand() % 52;
			}
			while(visited[y] == true);
			visited[x] = true;
			visited[y] = true;
			Card aux = deck[x];
			deck[x] = deck[y];
			deck[y] = aux;
		}
	}
};