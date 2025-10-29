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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string cur;
  vi nums(9);
  iota(nums.begin(), nums.end(), 1);
  // do {
  //   bool chk = true;
  //   cur = to_string(nums[0]) + to_string(nums[1]) + to_string(nums[2]);
  //   cout << cur << "\n";
  //
  // } while (next_permutation(nums.begin(), nums.end()));

  for (auto i : nums) {
    cout << i << ' ';
  }

  return 0;
}
