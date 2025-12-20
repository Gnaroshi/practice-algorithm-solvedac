// problem: 카드게임
// id: 2621
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  char c;
  vector<pair<char, int>> v(5);
  vi ans, cchk(4, 0), nchk(10, 0);
  for (int i = 0; i < 5; i++) {
    cin >> c >> n;
    if (c == 'R') {
      cchk[0]++;
    } else if (c == 'B') {
      cchk[1]++;
    } else if (c == 'Y') {
      cchk[2]++;
    } else if (c == 'G') {
      cchk[3]++;
    }

    nchk[n]++;
  }

  bool tchk;

  // 5장 색 모두 같고 숫자 연속 ->  900 + max;
  for (int i = 0; i < 4; i++) {
    if (cchk[i] == 5) {

      // 5장 색 모두 같음 ->  600  +  max;
      int tmx = 0;
      for (int j = 1; j <= 9; j++) {
        if (nchk[j] == 1) {
          tmx = j;
        }
      }
      ans.push_back(600 + tmx);

      for (int j = 1; j <= 5; j++) {
        if (nchk[j] == 1 && nchk[j + 1] == 1 && nchk[j + 2] == 1 &&
            nchk[j + 3] == 1 && nchk[j + 4] == 1) {
          ans.push_back(900 + j + 4);
          break;
        }
      }
    }
  }

  // 4장 숫자 같음 ->  800  +  숫자

  for (int i = 1; i <= 9; i++) {
    if (nchk[i] == 4) {
      ans.push_back(800 + i);
      break;
    }
  }

  // 3장 숫자 같음 +  2장 숫자 같음 ->  3장 숫자 *  10  +  2장 숫자 +  700
  bool chk3 = false, chk2 = false;
  int n3, n2;
  for (int i = 1; i <= 9; i++) {
    if (nchk[i] == 3) {
      chk3 = true;
      n3 = i;
    }
    if (nchk[i] == 2) {
      chk2 = true;
      n2 = i;
    }
  }

  if (chk3 && chk2) {
    ans.push_back(n3 * 10 + n2 + 700);
  }

  // 3장 숫자 같음 ->  같은 숫자 +  400
  if (chk3) {
    ans.push_back(n3 + 400);
  }

  // 5장 숫자 연속 ->  가장 높은 숫자 +  500;
  for (int j = 1; j <= 5; j++) {
    if (nchk[j] == 1 && nchk[j + 1] == 1 && nchk[j + 2] == 1 &&
        nchk[j + 3] == 1 && nchk[j + 4] == 1) {
      ans.push_back(500 + j + 4);
      break;
    }
  }

  // 2장 숫자 같은게 2쌍 ->  같은 숫자 max * 10 + 작은 숫자 +  300
  bool chk2_1 = false, chk2_2 = false;
  int n2_1, n2_2;
  for (int i = 1; i <= 9; i++) {
    if (nchk[i] == 2) {
      if (chk2_1 == true) {
        chk2_2 = true;
        n2_2 = i;
      } else {
        chk2_1 = true;
        n2_1 = i;
      }
    }
  }

  if (chk2_1 && chk2_2) {
    ans.push_back(n2_2 * 10 + n2_1 + 300);
  }

  // 2장 숫자 같음 ->  같은 숫자 +  200
  if (chk2_1) {
    ans.push_back(n2_1 + 200);
  }

  // 가장 큰 숫자 +  100
  int tmx = 0;
  for (int i = 1; i <= 9; i++) {
    if (nchk[i]) {
      tmx = i;
    }
  }
  ans.push_back(tmx + 100);

  cout << *max_element(ans.begin(), ans.end()) << '\n';

  return 0;
}
