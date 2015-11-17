#include <iostream>

using namespace std;

void insert(int *b, int *a, int sizeB, int sizeA)
{
  int indexA = sizeA - 1;
  int indexB = sizeB - 1;
  int indexMerged = sizeA + sizeB - 1;

  while(indexA >= 0 && indexB >= 0)
    if(a[indexA] > b[indexB])
      a[indexMerged--] = a[indexA--];
    else
      a[indexMerged--] = b[indexB--];

  while(indexB >= 0)
    a[indexMerged--] = b[indexB--];
}

int main()
{
  int sizeA, sizeB, *a, *b;
  cin >> sizeA >> sizeB;
  a = new int[sizeA + sizeB];
  b = new int[sizeB];

  for(int i = 0; i < sizeA; ++i)
    cin >> a[i];

  for(int i = 0; i < sizeB; ++i)
    cin >> b[i];

  insert(b, a, sizeB, sizeA);

  for(int i = 0; i < sizeA + sizeB; ++i)
    cout << a[i] << " ";
  cout << "\n";

  return 0;
}
