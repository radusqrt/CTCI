#include <iostream>

using namespace std;

int stairs(int n, int *v)
{
  if(n < 0) return 0;
  if(n == 0) return 1;
  if(v[n] != 0) return v[n];
  v[n] = stairs(n-1, v) + stairs(n-2, v) + stairs(n-3, v);
  // return stairs(n-1, v) + stairs(n-2, v) + stairs(n-3, v);
  return v[n];
}

int main()
{
  int n, *v = new int[100]();
  // cin >> n;
  n = 30;

  cout << stairs(n, v) << "\n";
  delete[] v;

  return 0;
}
