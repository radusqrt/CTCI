#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class ParanthesesBuilder
{
  vector <string> v;
  map <string, bool> m;
  string PAIR;
public:
  ParanthesesBuilder(){ PAIR = "()"; }
  vector <string> getVector() {return v;}

  void addParanthese()
  {
    if(v.size() == 0)
    {
      v.push_back(PAIR);
      return;
    }

    int l = v.size();
    for(int i = 0; i < l; ++i)
    {
      string s = PAIR;
      if(m.find(s + v[i]) == m.end())
        v.push_back(s + v[i]);
      m[s + v[i]] = true;

      for(int j = 0; j < v[i].size(); ++j)
      if(v[i][j] == '(')
      {
        // cout << "DA";
        string s(v[i].begin(), v[i].begin() + j + 1);
        s += PAIR;
        s += string(v[i].begin() + j + 1, v[i].end());

        if(m.find(s) == m.end())
          v.push_back(s);
        m[s] = true;
      }
    }

      for(int i = 0; i < l; ++i)
        v.erase(v.begin());
  }
};

int main()
{
  int n;
  cin >> n;
  ParanthesesBuilder pb;
  while(n--)
    pb.addParanthese();

  vector <string> v = pb.getVector();
  for(int i = 0; i < v.size(); ++i)
    cout << v[i] << "\n";
  return 0;
}
