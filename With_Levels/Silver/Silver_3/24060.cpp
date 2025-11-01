// problem: 알고리즘 수업  -  병합 정렬 1
// id: 24060
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

int n, k, cnt = 0, ans = -1;
bool chk = false;
vi v, tmp;

void merge(int p, int q, int r) {

  tmp.resize(r + 2);
  int i = p, j = q + 1, t = 1;
  while (i <= q && j <= r) {
    if (v[i] <= v[j]) {
      tmp[t++] = v[i++];
    } else {
      tmp[t++] = v[j++];
    }
  }

  while (i <= q) {
    tmp[t++] = v[i++];
  }

  while (j <= r) {
    tmp[t++] = v[j++];
  }

  i = p, t = 1;
  while (i <= r) {
    v[i++] = tmp[t++];
    cnt++;
    if (cnt == k && !chk) {
      cout << tmp[t - 1] << '\n';
    }
  }

  return;
}

void merge_sort(int st, int ed) {
  int p = st, r = ed, q;

  if (p < r) {
    q = (p + r) / 2;
    merge_sort(p, q);
    merge_sort(q + 1, r);
    merge(p, q, r);
  }

  return;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> k;
  v.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  merge_sort(0, n - 1);

  if (cnt < k) {
    cout << "-1\n";
  }

  return 0;
}
