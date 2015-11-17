#include <vector>

class DirectedGraph
{
	std::vector <int> G*;
public:
	DirectedGraph()
	{
		G = new std::vector <int> [100];
	}
	DirectedGraph(int size)
	{
		G = new std::vector <int> [size];
	}

	void addEdge(int x, int y)
	{
		G[x].push_back(y);
	}

}