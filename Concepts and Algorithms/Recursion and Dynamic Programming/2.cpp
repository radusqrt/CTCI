#include <iostream>

//FOLLOW UP - LEE'S ALGORITHM

using namespace std;

int ways(int x, int y, int **grid)
{
  if(x < 0 || y < 0) return 0;
  if(x == 0 && y == 0) return 1;
  if(grid[x][y] != 0) return grid[x][y];
  grid[x][y] = ways(x-1, y, grid) + ways(x, y-1, grid);
  // return ways(x-1, y, grid) + ways(x, y-1, grid);
  return grid[x][y];
}

int main()
{
  int x, y, **grid = new int*[100]();
  for(int i = 0; i < 100; ++i)
    grid[i] = new int[100]();
  // cin >> x >> y;
  x = 15; y = 15;
  cout << ways(x, y, grid);
  return 0;
}
