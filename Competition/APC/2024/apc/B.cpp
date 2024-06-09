// problem: B번 - 현대모비스 특별상의 주인공은? 2
// id:
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

int n, ans;
string mb = "MOBIS", rmb = "SIBOM";
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  vector<string> v(n);
  for (auto &i : v)
    cin >> i;

  if (n < 5) {
    cout << 0 << '\n';
    return 0;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i][j] != 'M')
        continue;
      for (int dir = 0; dir < 8; dir++) {
        int cx = i, cy = j;
        string t = "";
        t += v[cx][cy];
        bool chk = true;
        for (int k = 1; k < 5; k++) {
          cx += dx[dir], cy += dy[dir];
          if (cx < 0 || cx >= n || cy < 0 || cy >= n) {
            chk = false;
            break;
          }
          t += v[cx][cy];
        }
        if (t == mb)
          ans++;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}
