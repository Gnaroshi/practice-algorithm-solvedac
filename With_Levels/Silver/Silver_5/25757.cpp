// problem: 임스와 함께하는 미니게임
// id: 25757
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

  int n, d;
  char c;
  string s;
  set<string> st;
  cin >> n >> c;
  if (c == 'Y')
    d = 1;
  else if (c == 'F')
    d = 2;
  else if (c == 'O')
    d = 3;

  for (int i = 0; i < n; i++) {
    cin >> s;
    st.insert(s);
  }

  cout << st.size() / d << '\n';

  return 0;
}
