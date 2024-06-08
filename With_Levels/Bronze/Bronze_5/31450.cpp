// problem: Everyone is a winner
// id: 31450
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

  long long a, b;
  cin >> a >> b;
  cout << (a % b == 0 ? "Yes" : "No");

  return 0;
}
