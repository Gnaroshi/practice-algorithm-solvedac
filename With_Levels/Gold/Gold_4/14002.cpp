// problem: 가장 긴 증가하는 부분 수열 4
// id: 14002
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

int n, t, ans, loc, cnt;
vector<int> v, d, p;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    v.push_back(t);
  }

  p.resize(n);
  p[0] = 0;
  d.push_back(-0x3f3f3f3f);

  for (int i = 0; i < n; i++) {
    if (v[i] > d.back()) {
      d.push_back(v[i]);
      p[i] = d.size();
    } else {
      auto it = lower_bound(d.begin(), d.end(), v[i]);
      *it = v[i];
      p[i] = it - d.begin() + 1;
    }
    if (p[i] > cnt)
      loc = i, cnt = p[i];
  }
  cout << d.size() - 1 << "\n";
  // cout << loc << ' ' << cnt << '\n';

  vector<int> seq;
  seq.push_back(v[loc]);
  for (int i = loc - 1; i >= 0; i--) {
    if (v[i] < v[loc]) {
      if (p[i] + 1 == p[loc]) {
        loc = i;
        seq.push_back(v[i]);
      }
    }
  }
  // for (int i = 0; i < n; i++)
  //   cout << p[i] << ' ';
  // cout << "\n";
  for (auto i = seq.rbegin(); i != seq.rend(); i++) {
    cout << *i << ' ';
  }

  return 0;
}
