// problem: Don't Be Last
// id: 14455
// tag:
// time taken:

#include <algorithm>
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

vector<pair<int, string>> v;
string cow_name[7] = {"Bessie",    "Elsie",  "Daisy",    "Gertie",
                      "Annabelle", "Maggie", "Henrietta"};
int n, t;
string s;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < 7; i++) {
    v.push_back({0, cow_name[i]});
  }

  for (int i = 0; i < n; i++) {
    cin >> s >> t;
    for (int j = 0; j < 7; j++) {
      if (s == v[j].second) {
        v[j].first += t;
        break;
      }
    }
  }

  sort(v.begin(), v.end());

  int mn = v[0].first;
  int cnt = 0;
  for (int i = 0; i < 7; i++) {
    if (v[i].first == mn)
      cnt++;
  }
  if (cnt == 7)
    cout << "Tie\n";
  else {
    mn = v[cnt].first;
    int tcnt = 0;
    for (int i = cnt; i < 7; i++) {
      if (v[i].first == mn)
        tcnt++;
    }

    if (tcnt > 1)
      cout << "Tie\n";
    else
      cout << v[cnt].second << '\n';
  }

  return 0;
}
