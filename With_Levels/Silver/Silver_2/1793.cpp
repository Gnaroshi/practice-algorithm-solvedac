// problem: 타일링
// id: 1793
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

vi v(251);

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  v[0] = 0;
  v[1] = 1;
  v[2] = 3;
  for (int i = 3; i <= 250; i++)
    v[i] = v[i - 1] + v[i - 2] * 2;

  int n;
  while (cin >> n) {
    cout << v[n] << '\n';
  }

  return 0;
}
