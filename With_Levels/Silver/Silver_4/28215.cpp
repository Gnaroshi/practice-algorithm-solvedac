// problem: 대피소
// id: 28215
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using vs = vector<string>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int dist(pii a, pii b) {
  return (abs(a.first - b.first) + abs(a.second - b.second));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, ans = 0x3f3f3f3f, t_ans = 0x3f3f3f3f, t_dist;
  cin >> n >> k;

  vpi v(n), cur(k);
  for (auto &i : v) {
    cin >> i.first >> i.second;
  }

  if (k == 1) {
    for (int i = 0; i < n; i++) {
      t_dist = 0;
      for (int t = 0; t < n; t++) {
        t_dist = max(t_dist, dist(v[i], v[t]));
      }
      t_ans = min(t_ans, t_dist);
    }
    cout << t_ans << "\n";
  } else if (k == 2) {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        t_dist = 0;
        for (int t = 0; t < n; t++) {
          t_dist = max(t_dist, min(dist(v[i], v[t]), dist(v[j], v[t])));
        }
        t_ans = min(t_ans, t_dist);
      }
    }
    cout << t_ans << "\n";
  } else if (k == 3) {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
          t_dist = 0;
          for (int t = 0; t < n; t++) {
            t_dist = max(t_dist, min(dist(v[i], v[t]),
                                     min(dist(v[j], v[t]), dist(v[k], v[t]))));
          }
          t_ans = min(t_ans, t_dist);
        }
      }
    }
    cout << t_ans << "\n";
  }

  return 0;
}
