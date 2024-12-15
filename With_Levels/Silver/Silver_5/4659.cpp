// problem: 비밀번호 발음하기
// id: 4659
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

void pfn(string s, bool chk) {
  cout << "<" << s << "> "
       << "is ";
  if (!chk)
    cout << "not ";
  cout << "acceptable.\n";
  return;
}

bool vchk(char c) {
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
    return true;
  }
  return false;
}

bool fn(string s) {
  bool chk1 = false;
  bool chk2 = true;
  bool chk3 = true;
  int sl = s.length();
  vb v;

  for (auto i : s) {
    v.push_back(vchk(i));
    if (v.back()) {
      chk1 = true;
    }
  }

  for (int i = 2; i < sl; i++) {
    if (v[i] == v[i - 1] && v[i] == v[i - 2]) {
      chk2 = false;
      break;
    }
  }

  for (int i = 1; i < sl; i++) {
    if (s[i] == s[i - 1]) {
      if (s[i] == 'e' || s[i] == 'o')
        continue;
      chk3 = false;
      break;
    }
  }

  return (chk1 && chk2 && chk3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (true) {
    cin >> s;
    if (s == "end")
      break;
    pfn(s, fn(s));
  }

  return 0;
}
