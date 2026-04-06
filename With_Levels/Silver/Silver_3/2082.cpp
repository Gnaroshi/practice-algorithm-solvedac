// problem: 시계
// id: 2082
// tag:
// time taken:

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

string brd[5];
string d[10][5] = {
    {"###", "#.#", "#.#", "#.#", "###"}, // 0
    {"..#", "..#", "..#", "..#", "..#"}, // 1
    {"###", "..#", "###", "#..", "###"}, // 2
    {"###", "..#", "###", "..#", "###"}, // 3
    {"#.#", "#.#", "###", "..#", "..#"}, // 4
    {"###", "#..", "###", "..#", "###"}, // 5
    {"###", "#..", "###", "#.#", "###"}, // 6
    {"###", "..#", "..#", "..#", "..#"}, // 7
    {"###", "#.#", "###", "#.#", "###"}, // 8
    {"###", "#.#", "###", "..#", "###"}  // 9
};

bool chk(int n, int cur) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      if (brd[i][cur + j] == '#' && d[n][i][j] == '.') {
        return false;
      }
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 0; i < 5; i++) {
    getline(cin, brd[i]);
  }

  int h1, h2, m1, m2;
  bool fnd = false;

  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 9; j++) {
      int t = i * 10 + j;
      if (t >= 24) {
        continue;
      }
      if (chk(i, 0) && chk(j, 4)) {
        h1 = i, h2 = j;
        fnd = true;
        break;
      }
    }
    if (fnd) {
      break;
    }
  }

  fnd = false;
  for (int i = 0; i <= 5; i++) {
    for (int j = 0; j <= 9; j++) {
      if (chk(i, 8) && chk(j, 12)) {
        m1 = i, m2 = j;
        fnd = true;
        break;
      }
    }

    if (fnd) {
      break;
    }
  }

  cout << h1 << h2 << ":" << m1 << m2 << '\n';

  return 0;
}
