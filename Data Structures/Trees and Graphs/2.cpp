#include <vector>
#include <iostream>

using namespace std;

void DFS(int node, int *visited, vector <int> G[])
{
	visited[node] = 1;
	for(int i = 0; i < G[node].size(); ++i)
		if(!visited[G[node][i]])
		{
			DFS(G[node][i], visited, G);
		}
}

int main()
{
	int n, m, x, y;
	cin >> n >> m;
	vector <int> G[n];
	for(int i = 0; i < m; ++i)
	{
		cin >> x >> y;
		G[x].push_back(y);
	}

	cin >> x >> y;
	int *visited = new int[n]();

	DFS(x, visited, G);
	if(visited[y]) cout << "DA\n";
	else cout << "NU\n";

	delete[] visited;

	return 0;
}