#include <iostream>

using namespace std;

void back(int k, int n, int a[], int *stack)
{
  for(int i = stack[k-1] + 1; i <= n; ++i)
  {
    stack[k] = i;
    if(k < n)
      back(k+1, n, a, stack);

    for(int j = 1; j <= k; ++j)
      cout << a[stack[j]-1] << " ";
    cout << "\n";

  }
}

int main()
{
  int n, a[100], *stack = new int[100]();
  cin >> n;
  for(int i = 0; i < n; ++i)
    cin >> a[i];

  back(1, n, a, stack);
}
