// problem: 가지 한 두름 주세요
// id: 31628
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

  vector<vector<string>> v(10, vector<string>(10));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      cin >> v[i][j];
  }

  bool chk = false;
  string a, b;
  for (int i = 0; i < 10; i++) {
    a = v[i][0];
    b = v[0][i];
    bool tchka = true, tchkb = true;

    for (int j = 0; j < 10; j++) {
      if (v[i][j] != a) {
        tchka = false;
      }

      if (v[j][i] != b) {
        tchkb = false;
      }
    }

    if (tchka || tchkb) {
      chk = true;
      break;
    }
  }

  cout << chk << '\n';

  return 0;
}
