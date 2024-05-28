// problem: 약속
// id: 1183
// tag:
// time taken:

#include <algorithm>
#include <filesystem>
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

int n, a, b;
vi v;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    v.push_back(b - a);
  }

  sort(v.begin(), v.end());
  if (n % 2 == 1)
    cout << 1 << "\n";
  else
    cout << v[n / 2] - v[n / 2 - 1] + 1 << '\n';

  return 0;
}
