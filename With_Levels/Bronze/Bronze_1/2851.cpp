// problem: 슈퍼 마리오
// id: 2851
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

  int ans = 0, df = 0x3f3f3f3f;
  vector<int> v(11);
  v[0] = 0;
  for (int i = 1; i < 11; i++)
  {
    cin >> v[i];
    v[i] += v[i - 1];
  }
  for (int i = 1; i < 11; i++)
  {
    int t = v[i];
    int tdf = abs(t - 100);

    if (tdf < df)
    {
      ans = t;
      df = tdf;
    }
    else if (tdf == df)
    {
      if (ans < t)
        ans = t;
    }
  }
  cout << ans << '\n';

  return 0;
}
