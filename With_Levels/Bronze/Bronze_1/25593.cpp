// problem: 근무 지옥에 빠진 푸앙이 (Small)
// id: 25593
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

template <typename KeyType, typename ValueType>
pair<KeyType, ValueType> get_max(const map<KeyType, ValueType> &x) {
  using pairtype = pair<KeyType, ValueType>;
  return *max_element(x.begin(), x.end(),
                      [](const pairtype &p1, const pairtype &p2) {
                        return p1.second < p2.second;
                      });
}

template <typename KeyType, typename ValueType>
pair<KeyType, ValueType> get_min(const map<KeyType, ValueType> &x) {
  using pairtype = pair<KeyType, ValueType>;
  return *max_element(x.begin(), x.end(),
                      [](const pairtype &p1, const pairtype &p2) {
                        return p1.second > p2.second;
                      });
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int w[4] = {4, 6, 4, 10};
  map<string, int> m;
  string s;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 7; k++) {
        cin >> s;
        if (s != "-")
          m[s] += w[j];
      }
    }
  }

  if (m.empty()) {
    cout << "Yes\n";
    return 0;
  }

  int mn = get_min(m).second, mx = get_max(m).second;

  cout << ((mx - mn > 12) ? "No\n" : "Yes\n");

  return 0;
}
