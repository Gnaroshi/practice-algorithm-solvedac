// problem: I번 - K-mins
// id:
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
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;
using ll = long long;

int n, k;
vector<ll> a;
ll ans;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> k;
  a.resize(n);
  for (auto &i : a)
    cin >> i;

  for (int l = 0; l < n; l++) {
    for (int r = l; r < n; r++) {
      if (r - l + 1 < k)
        continue;
    }
  }

  return 0;
}
