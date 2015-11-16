#include <iostream>
#include <string>

using namespace std;

int binarySearch(string v[], int left, int right, string key, int &length)
{
  int m = left + (right-left) / 2;
  if(v[m] == key) return m;

  if(v[m].size() == 0)
  {
      int mFront = m + 1;
      int mBack = m - 1;
      while(mFront < length && mBack >= 0)
        if(v[mFront++].size() > 0 || v[mBack--].size() > 0)
          break;
      if(v[mFront - 1].size() > 0) m = mFront - 1;
      else if(v[mBack + 1].size() > 0) m = mBack + 1;
      else if(mFront < length)
      {
        while(mFront < length)
          if(v[mFront++].size() > 0)
            break;
        if(v[mFront - 1].size() > 0) m = mFront - 1;

      }
      else
      {
        while(mBack >= 0)
          if(v[mBack--].size() > 0)
            break;
        if(v[mBack - 1].size() > 0) m = mBack + 1;
      }

  if(v[m] == key) return m;
  }

  if(v[m] > key)
    return binarySearch(v, left, m - 1, key, length);
  return binarySearch(v, m + 1, right, key, length);
}

int main()
{
  string v[] = {"abcd", "bdfff", "", "", "", "cbaaa", "ccc", "", "ddd"};
  int length = 9;

  // sort(v, v + length, cmp);

  for(int i = 0; i < 9; ++i)
    cout << binarySearch(v, 0, length - 1, v[i], length) << "\n";
  // int m = binarySearch(v, 0, length - 1, "bdfff");
  // cout << m << "\n";

  return 0;
}
