// problem: 배수 스위치
// id: 12927
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

  string s;
  cin >> s;
  int iter = s.length(), cnt = 0;
  vb v(iter + 1);
  for (int i = 0; i < iter; i++) {
    if (s[i] == 'Y') {
      v[i + 1] = true;
    } else {
      v[i + 1] = false;
    }
  }

  for (int i = 1; i <= iter; i++) {
    if (v[i] == true) {
      for (int j = i; j <= iter; j += i) {
        v[j] = !v[j];
      }
      cnt++;
    }
  }

  cout << cnt << "\n";

  return 0;
}
