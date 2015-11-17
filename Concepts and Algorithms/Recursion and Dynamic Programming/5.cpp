0#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StringBuilder
{
  vector <string> v;
public:
  StringBuilder(){}
  vector <string> getVector() {return v;}
  void addChar(char c)
  {
    int l = v.size();
    for(int i = 0; i < l; ++i)
    {
      string aux = v[i];
      for(int j = 0; j < aux.size() + 1; ++j)
      {
        string leftString(aux.begin(), aux.begin() + j);
        // cout
        leftString += c;
        leftString += string(aux.begin() + j, aux.end());
        v.push_back(leftString);
      }
    }

    if(l == 0)
    {
      string aux;
      aux += c;
      v.push_back(aux);
    }
      // v.add(string(c));

    for(int i = 0; i < l; ++i)
      v.erase(v.begin());
  }
};

int main()
{
  string s;
  cin >> s;
  // vector <string> v;

  StringBuilder sb;
  for(int i = 0; i < s.size(); ++i)
  {
    sb.addChar(s[i]);
  }

  vector <string> v = sb.getVector();
  // cout << v.size();

  for(int i = 0; i < v.size(); ++i)
    cout << v[i] << "\n";

  return 0;
}
