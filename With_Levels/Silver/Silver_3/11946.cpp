// problem: ACM-ICPC
// id: 11946
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

struct Team {
  int team_num;
  int solved = 0;
  vb solved_chk;
  vi failed_cnt;
  int total_time = 0;
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, q, cur_time, cur_team, cur_problem;
  cin >> n >> m >> q;

  vector<Team> v_team(n);
  for (int i = 0; i < n; i++) {
    v_team[i].team_num = i + 1;
    v_team[i].solved_chk.resize(m, false);
    v_team[i].failed_cnt.resize(m, 0);
  }
  string status;

  for (int i = 0; i < q; i++) {
    cin >> cur_time >> cur_team >> cur_problem >> status;

    if (status[0] == 'A') {
      if (!v_team[cur_team - 1].solved_chk[cur_problem - 1]) {
        v_team[cur_team - 1].total_time +=
            v_team[cur_team - 1].failed_cnt[cur_problem - 1] * 20 + cur_time;
        v_team[cur_team - 1].solved += 1;
        v_team[cur_team - 1].solved_chk[cur_problem - 1] = true;
      }
    } else {
      v_team[cur_team - 1].failed_cnt[cur_problem - 1]++;
    }
  }

  sort(v_team.begin(), v_team.end(), [](const Team &a, const Team &b) {
    if (a.solved == b.solved) {
      if (a.total_time == b.total_time) {
        return a.team_num < b.team_num;
      }
      return a.total_time < b.total_time;
    }
    return a.solved > b.solved;
  });

  for (auto &i : v_team) {
    cout << i.team_num << ' ' << i.solved << ' ' << i.total_time << '\n';
  }

  return 0;
}
