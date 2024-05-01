// problem: 문자열 폭발
// id: 9935
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, b;
  int sl, bl, cur = 0, cnt = 0;
  stack<char> st;

  cin >> s >> b;
  sl = s.length(), bl = b.length();
  bool chk = false;

  for (int i = 0; i < sl; i++) {
    st.push(s[i]);
    if (s[i] == b[cur]) {
      chk = true;
      cur++;
    } else if (chk) {
      if (s[i] == b[cur])
        cur++;
      else
        cur = 0, chk = false;
    }
    if (cur == bl) {
      for (int j = 0; j < bl; j++)
        st.pop();
      cur = 0;
    }
    if (s[i] == b.back()) {
      string t = "";
      for (cnt = 0; cnt < bl; cnt++) {
        if (st.empty())
          break;
        if (b[bl - cnt - 1] != st.top())
          break;
        t += st.top();
        st.pop();
      }
      if (cnt != bl) {
        reverse(t.begin(), t.end());
        for (auto j : t)
          st.push(j);
      }
    }
  }

  string ans = "";
  while (!st.empty()) {
    ans += st.top();
    st.pop();
  }
  reverse(ans.begin(), ans.end());

  if (ans.length() == 0)
    cout << "FRULA\n";
  else
    cout << ans << '\n';

  return 0;
}
