// problem: 수학숙제
// id: 2870
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

bool cmp(string a, string b) {
  if (a.length() == b.length()) {
    int iter = a.length();
    for (int i = 0; i < iter; i++) {
      if (a[i] != b[i]) {
        return a[i] < b[i];
      }
    }
    return a < b;
  }
  return a.length() < b.length();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vs v;
  string s, t;

  for (int i = 0; i < n; i++) {
    cin >> s;
    int iter = s.length();
    bool tchk = false;
    t = "";
    for (int j = 0; j < iter; j++) {
      if (isdigit(s[j])) {
        if (s[j] != '0') {
          tchk = true;
          t += s[j];
        } else {
          if (tchk) {
            t += s[j];
          } else if (j + 1 != iter) {
            if (!isdigit(s[j + 1])) {
              v.push_back("0");
            }
          } else {
            v.push_back("0");
          }
        }
      } else {
        if (t != "") {
          v.push_back(t);
          t = "";
          tchk = false;
        }
      }
    }
    if (t != "") {
      v.push_back(t);
    }
  }

  sort(v.begin(), v.end(), cmp);
  for (auto i : v) {
    cout << i << '\n';
  }

  return 0;
}
