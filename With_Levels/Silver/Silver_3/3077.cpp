// problem: 임진왜란
// id: 3077
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, tot, cnt = 0, la, lb;
  cin >> n;
  tot = (n - 1) * n / 2;

  map<int, string> mpa;
  map<string, int> mpb;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    mpa[i] = s;
  }
  for (int i = 0; i < n; i++) {
    cin >> s;
    mpb[s] = i;
  }

  for (int i = 0; i < n; i++) {
    s = mpa[i];
    for (int j = i + 1; j < n; j++) {
      if (mpb[mpa[j]] - mpb[s] > 0) {
        cnt++;
      }
    }
  }

  cout << cnt << "/" << tot << '\n';

  return 0;
}
