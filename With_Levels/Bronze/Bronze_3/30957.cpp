// problem: 빅데이터 vs 정보보호 vs 인공지능
// id: 30957
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
  string s, fd = "BSA";
  cin >> n >> s;

  int cnt[3] = {0};
  for (auto i : s) {
    for (int j = 0; j < 3; j++) {
      if (i == fd[j]) {
        cnt[j]++;
        break;
      }
    }
  }

  int mx = *max_element(cnt, cnt + 3);
  int mcnt = 0;
  bool chk[3] = {0};
  for (int i = 0; i < 3; i++) {
    if (cnt[i] == mx) {
      chk[i] = 1;
      mcnt++;
    }
  }
  if (mcnt == 3)
    cout << "SCU\n";
  else {
    for (int i = 0; i < 3; i++) {
      if (chk[i])
        cout << fd[i];
    }
    cout << '\n';
  }

  return 0;
}
