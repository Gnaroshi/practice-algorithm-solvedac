// problem: 놀라운 문자열
// id: 1972
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
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using qi = queue<int>;
using si = stack<int>;

bool fn(const string s) {
  int iter = s.length();
  for (int i = 1; i < iter; i++) {
    set<string> ss;
    for (int j = 0; j < iter - i; j++) {
      string t = "";
      t += s[j];
      t += s[j + i];

      if (ss.empty())
        ss.insert(t);
      else {
        auto loc = ss.find(t);
        if (loc != ss.end())
          return false;
        else
          ss.insert(t);
      }
    }
  }

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (getline(cin, s)) {
    if (s == "*")
      break;
    cout << s << " is ";
    if (!fn(s))
      cout << "NOT ";
    cout << "surprising.\n";
  }

  return 0;
}
