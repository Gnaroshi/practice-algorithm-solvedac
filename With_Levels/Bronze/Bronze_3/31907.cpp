// problem: GIST 찍기
// id: 31907
// tag:
// time taken:

#include <algorithm>
#include <cmath>
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

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << 'G';
    }
    for (int j = 0; j < n * 3; j++) {
      cout << '.';
    }
    cout << '\n';
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << '.';
    }
    for (int j = 0; j < n; j++) {
      cout << 'I';
    }
    for (int j = 0; j < n; j++) {
      cout << '.';
    }
    for (int j = 0; j < n; j++) {
      cout << 'T';
    }
    cout << '\n';
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << '.';
    }
    for (int j = 0; j < n; j++) {
      cout << '.';
    }
    for (int j = 0; j < n; j++) {
      cout << 'S';
    }
    for (int j = 0; j < n; j++) {
      cout << '.';
    }
    cout << '\n';
  }

  return 0;
}
