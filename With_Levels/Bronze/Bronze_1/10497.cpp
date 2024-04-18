// problem: Hitting the Targets
// id: 10497
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<double>> v;
  vector<int> ans;
  double x, y, x1, y1, x2, y2, cr, t;
  int tc, n;
  string s;

  cin >> tc;
  for (int iter = 0; iter < tc; iter++)
  {
    cin >> s;
    vector<double> ip;
    if (s[0] == 'r')
    {
      for (int i = 0; i < 4; i++)
      {
        cin >> t;
        ip.push_back(t);
      }
      v.push_back(ip);
    }
    else
    {
      for (int i = 0; i < 3; i++)
      {
        cin >> t;
        ip.push_back(t);
      }
      v.push_back(ip);
    }
  }

  cin >> n;
  ans.resize(n);
  fill(ans.begin(), ans.end(), 0);
  for (int iter = 0; iter < n; iter++)
  {
    cin >> x >> y;
    for (int i = 0; i < tc; i++)
    {
      x1 = v[i][0], y1 = v[i][1];
      if (v[i].size() == 4)
      {
        x2 = v[i][2], y2 = v[i][3];
        if (x1 <= x && x2 >= x && y1 <= y && y2 >= y)
          ans[iter]++;
      }
      else
      {
        cr = v[i][2];
        if (cr * cr >= (x - x1) * (x - x1) + (y - y1) * (y - y1))
          ans[iter]++;
      }
    }
  }
  for (auto i : ans)
    cout << i << '\n';

  return 0;
}
