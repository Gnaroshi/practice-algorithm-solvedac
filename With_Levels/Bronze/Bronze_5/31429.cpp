// problem: SUAPC 2023 Summer
// id: 31429
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
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using qi = queue<int>;
using si = stack<int>;

int n;
int sol[] = {12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
int pan[] = {1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773};
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  n--;
  cout << sol[n] << ' ' << pan[n] << '\n';

  return 0;
}
