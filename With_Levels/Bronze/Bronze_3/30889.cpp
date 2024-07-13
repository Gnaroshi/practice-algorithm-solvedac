// problem: 좌석 배치도
// id: 30889
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
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vpi = vector<pii>;
using vvpi = vector<vpi>;
using vb = vector<bool>;
using vd = vector<double>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<vector<char>> v(10, vector<char>(20, '.'));
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    char r;
    int c;
    r = s[0], c = stoi(s.substr(1));
    v[r - 'A'][c - 1] = 'o';
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 20; j++)
      cout << v[i][j];
    cout << "\n";
  }

  return 0;
}
