// problem: 한 줄로 서기
// id: 1138
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, loc = 1;
  cin >> n;

  vi ref(n + 1), ans;

  for (int i = 1; i <= n; i++) {
    cin >> ref[i];
  }

  ans.push_back(n);
  for (int i = n - 1; i >= 1; i--)
    ans.insert(ans.begin() + ref[i], i);

  for (int i = 0; i < n; i++)
    cout << ans[i] << ' ';
  cout << '\n';

  return 0;
}
