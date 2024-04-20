// problem: 롤 케이크
// id: 3985
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

  int l, n, p, k, mxan = -1, mxbn = -1, mxa = -1, mxb = -1, t;
  int rc[1001] = {0};
  int mx[1001] = {0};
  cin >> l >> n;

  for (int i = 1; i <= n; i++)
  {
    cin >> p >> k;
    t = k - p + 1;
    if (mxa < t)
    {
      mxa = t;
      mxan = i;
    }
    for (int j = p; j <= k; j++)
      if (rc[j] == 0)
        rc[j] = i;
  }

  for (int i = 1; i <= l; i++)
    mx[rc[i]]++;
  mxbn = max_element(mx + 1, mx + n + 1) - mx;
  cout << mxan << '\n'
       << mxbn << '\n';

  return 0;
}
