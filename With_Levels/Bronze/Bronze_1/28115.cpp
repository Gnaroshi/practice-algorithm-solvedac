// problem: 등차수열의 합
// id: 28115.cpp
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vi a(n);
  for (auto &i : a)
    cin >> i;
  if (n > 2) {
    bool chk = true;
    int d = a[1] - a[0];
    for (int i = 2; i < n; i++) {
      if (a[i] - a[i - 1] != d) {
        cout << "NO\n";
        return 0;
      }
    }
  }
  cout << "YES\n";

  for (auto &i : a)
    cout << i << ' ';
  cout << "\n";
  for (int i = 0; i < n; i++)
    cout << "0 ";
  cout << '\n';

  return 0;
}
