// problem: D번 - 밤양갱
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
using ll = long long;
using pii = pair<int, int>;
using vpi = vector<pii>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vf = vector<double>;

ll n, dal = 10;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  if (n == 1) {
    cout << 10 << '\n';
    return 0;
  }
  if (n > 2)
    dal -= 1;
  ll ad = 0, cur = 1, m = 1;
  while (true) {
    if (cur >= n)
      break;
    ad++;
    cur += m;
    m *= 2;
  }

  cout << dal + ad << '\n';
  return 0;
}
