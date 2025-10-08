// // problem:
// // id:
// // tag:
// // time taken:
//
// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <map>
// #include <numeric>
// #include <queue>
// #include <set>
// #include <sstream>
// #include <stack>
// #include <string>
// #include <unordered_map>
// #include <vector>
//
// using namespace std;
// using ll = long long;
//
// using pii = pair<int, int>;
// using pll = pair<ll, ll>;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vpi = vector<pii>;
// using vvpi = vector<vpi>;
// using vb = vector<bool>;
// using vd = vector<double>;
// using vs = vector<string>;
// using vll = vector<ll>;
// using vvll = vector<vll>;
// using vpll = vector<pll>;
// using vvpll = vector<vpll>;
// using qi = queue<int>;
// using si = stack<int>;
//
// int main(void) {
//   ios::sync_with_stdio(false);
//
//   string s;
//   cin >> s;
//   int l = s.length();
//   for (int i = 0; i < l; i++) {
//     cout << s.substr(i + 1, l - i - 1) << s.substr(0, i + 1) << '\n';
//   }
//   cin.tie(nullptr);
//
//   return 0;
// }

// problem:
// id:
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

bool cmp(int a, int b) { return a > b; }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vi v = {5, 3, 2, 7, 4, 1, 9, 6, 8};
  sort(v.begin(), v.end(), cmp);
  for (auto i : v) {
    cout << i << ' ';
  }

  cout << '\n';

  return 0;
}
