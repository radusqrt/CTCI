#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int v[4] = {1, 5, 10, 25};
  int *s = new int[1000]();
  s[0] = 1;

  for(int i = 0; i < 4; ++i)
    for(int j = v[i]; j <= n; ++j)
      s[j] += s[j-v[i]];

  cout << s[n];

  delete[] s;

  return 0;
}
