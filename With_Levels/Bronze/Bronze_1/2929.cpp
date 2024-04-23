// problem: 머신 코드
// id: 2929
// tag:
// time taken:

#include <algorithm>
#include <cctype>
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

  int ans = 0, iter, l;
  string s;
  cin >> s;
  iter = s.length();
  for (int i = iter - 1; i >= 0; i--)
  {
    if (isupper(s[i]))
    {
      l = i;
      break;
    }
  }
  int tcnt;
  for (int i = 0; i < l; i++)
  {
    if (isupper(s[i]))
    {
      tcnt = 1;
      // cout << i << '\n';
      i++;
      for (; i < l; i++)
      {
        // cout << "ass: " << i << ' ' << tcnt << '\n';
        if (isupper(s[i]))
          break;
        tcnt++;
      }
      ans += (4 - tcnt % 4) % 4;
      // cout << ans << ' ' << tcnt << "\n";
      i--;
    }
  }

  cout << ans;

  return 0;
}
