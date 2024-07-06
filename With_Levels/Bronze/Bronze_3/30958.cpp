// problem: 서울사이버대학을 다니고
// id: 30958
// tag:
// time taken:

#include <algorithm>
#include <cctype>
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

  int n, cnt[26] = {0};
  cin >> n;
  cin.ignore();
  string s;
  getline(cin, s);
  for (int i = 0; i < n; i++) {
    if (isalpha(s[i])) {
      cnt[s[i] - 'a']++;
    }
  }
  cout << *max_element(cnt, cnt + 26);

  return 0;
}
