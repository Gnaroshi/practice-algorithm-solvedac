// problem: 팬린드로미터
// id: 4096
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

bool cp(string s) {
  int iter = s.length(), ih = iter / 2;
  for (int i = 0; i < ih; i++) {
    if (s[i] != s[iter - i - 1]) {
      return false;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (true) {
    cin >> s;
    int sl = s.length();
    if (s == "0") {
      break;
    }
    int cnt = 0;
    while (true) {
      if (cp(s) == true) {
        cout << cnt << '\n';
        break;
      }
      s = to_string(stoi(s) + 1);
      if (s.length() < sl) {
        int tsl = s.length();
        string t = "";
        for (int i = tsl; i < sl; i++) {
          t += '0';
        }
        s = t + s;
      }
      cnt++;
    }
  }

  return 0;
}
