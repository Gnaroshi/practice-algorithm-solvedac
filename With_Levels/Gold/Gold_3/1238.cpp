// problem: 파티
// id: 1238
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

const int SZ = 1005;
int n, m, x, s, e, t, mncst, cur, curcnt, nxt, nxtcst, ans;
vector<pair<int, int>> rd[SZ];
vector<int> mns(SZ), stoe(SZ);

void fn(int s) {
  fill(mns.begin(), mns.end(), 0x3f3f3f3f);
  mns[s] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;
  pq.push({0, s});

  while (!pq.empty()) {
    mncst = pq.top().first;
    cur = pq.top().second;
    curcnt = rd[cur].size();
    pq.pop();
    if (mncst <= mns[cur]) {
      for (int i = 0; i < curcnt; i++) {
        nxtcst = mncst + rd[cur][i].first;
        nxt = rd[cur][i].second;

        if (nxtcst < mns[nxt]) {
          mns[nxt] = nxtcst;
          pq.push({nxtcst, nxt});
        }
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m >> x;

  for (int i = 0; i < m; i++) {
    cin >> s >> e >> t;
    rd[s].push_back({t, e});
  }

  for (int i = 1; i <= n; i++) {
    fn(i);
    stoe[i] = mns[x];
  }

  fn(x);

  for (int i = 1; i <= n; i++)
    ans = max(ans, stoe[i] + mns[i]);

  cout << ans << '\n';

  return 0;
}
