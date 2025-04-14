// problem: 국영수
// id: 10825
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

struct Student {
  string nm;
  int sc[3] = {0};
};

bool cmp(Student a, Student b) {
  if (a.sc[0] == b.sc[0]) {
    if (a.sc[1] == b.sc[1]) {
      if (a.sc[2] == b.sc[2]) {
        return a.nm < b.nm;
      }
      return a.sc[2] > b.sc[2];
    }
    return a.sc[1] < b.sc[1];
  }
  return a.sc[0] > b.sc[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<Student> v;
  Student t;
  for (int i = 0; i < n; i++) {
    cin >> t.nm;
    for (int j = 0; j < 3; j++) {
      cin >> t.sc[j];
    }
    v.push_back(t);
  }

  sort(v.begin(), v.end(), cmp);
  for (auto i : v) {
    cout << i.nm << '\n';
  }

  return 0;
}
