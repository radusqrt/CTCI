#include <iostream>

using namespace std;
int NMAX, MMAX;

void binarySearch(int **a, int leftUpX, int leftUpY,
                  int rightDownX, int rightDownY, int key, int &posX, int &posY)
{
  if(leftUpX > rightDownX) return;
  if(leftUpY > rightDownY) return;

  if(rightDownX == leftUpX && rightDownY == leftUpY)
  {
    if(a[rightDownX][rightDownY] == key)
    {
      posX = rightDownX;
      posY = rightDownY;
    }
    return;
  }

  int mX = (leftUpX + rightDownX) / 2;
  int mY = (leftUpY + rightDownY) / 2;

  if(a[mX][mY] == key)
  {
    posX = mX, posY = mY;
    return;
  }

  if(mX+1 < NMAX && mY+1 < MMAX)
    if(a[mX+1][mY+1] == key)
    {
      posX = mX+1, posY = mY+1;
      return;
    }

  if(mX+1 < NMAX && mY+1 < MMAX)
    if(a[mX+1][mY+1] < key)
    {
     binarySearch(a, mX+1, mY+1, rightDownX, rightDownY, key, posX, posY);
     return;
    }

  if(mX+1 < NMAX)
    binarySearch(a, mX+1, leftUpY, rightDownX, mY, key, posX, posY);
  if(mY+1 < MMAX)
    binarySearch(a, leftUpX, mY+1, mX, rightDownY, key, posX, posY);

  if(a[mX][mY] > key)
    binarySearch(a, leftUpX, leftUpY, mX, mY, key, posX, posY);

}

int main()
{
  int n, m, i, j, **a;
  cin >> n >> m;
  NMAX = n; MMAX = m;

  a = new int* [n];
  for(i = 0; i < n; ++i)
    a[i] = new int[m];

  for(i = 0; i < n; ++i)
    for(j = 0; j < m; ++j)
      cin >> a[i][j];

  int posX, posY, key;

  for(i = 0; i < n; ++i)
    for(j = 0; j < m; ++j)
    {
      key = a[i][j];
      binarySearch(a, 0, 0, n-1, m-1, key, posX, posY);
      cout << posX << " " << posY << "\n";
    }

    // key = a[0][0];
    // binarySearch(a, 0, 0, n-1, m-1, key, posX, posY);
    // cout << posX << " " << posY << "\n";
  return 0;
}
