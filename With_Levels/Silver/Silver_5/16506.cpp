// problem: CPU
// id: 16506
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

string op[23] = {
    "ADD",    "ADDC",  "SUB",    "SUBC", "MOV",   "MOVC",  "AND",    "ANDC",
    "OR",     "ORC",   "NOT",    "MULT", "MULTC", "LSFTL", "LSFTLC", "LSFTR",
    "LSFTRC", "ASFTR", "ASFTRC", "RL",   "RLC",   "RR",    "RRC",
};

string opc[23] = {
    "0000", "0000", "0001", "0001", "0010", "0010", "0011", "0011",
    "0100", "0100", "0101", "0110", "0110", "0111", "0111", "1000",
    "1000", "1001", "1001", "1010", "1010", "1011", "1011",
};

string itob(int n) {
  string ret = "";
  int t = n, len;
  while (t > 0) {
    ret += char(t % 2 + '0');
    t /= 2;
  }
  len = ret.length();
  for (int i = len; i < 3; i++) {
    ret += '0';
  }

  reverse(ret.begin(), ret.end());
  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    string opt, ans = "";
    int d, a, b;
    char chkc = false;

    cin >> opt >> d >> a >> b;
    for (int i = 0; i < 23; i++) {
      if (op[i] == opt) {
        ans += opc[i];
        break;
      }
    }
    chkc = (opt.back() == 'C');
    if (chkc) {
      ans += '1';
    } else {
      ans += '0';
    }

    ans += '0';
    ans += itob(d);
    ans += itob(a);
    if (chkc) {
      if (b < 8) {
        ans += '0';
      }
      ans += itob(b);
    } else {
      ans += itob(b);
      ans += '0';
    }

    cout << ans << '\n';
  }

  return 0;
}
