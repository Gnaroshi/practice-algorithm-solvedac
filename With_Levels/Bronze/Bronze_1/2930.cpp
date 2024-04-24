// problem: 가위 바위 보
// id: 2930
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

int fn(char a, char b) {
  if (a == b)
    return 1;
  if (a == 'S' && b == 'P')
    return 2;
  else if (a == 'P' && b == 'R')
    return 2;
  else if (a == 'R' && b == 'S')
    return 2;
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int r, n, ans = 0, ans_mx = 0;
  string a, b;
  vector<vector<int>> v;
  vector<int> cnt_rsp(3);
  fill(cnt_rsp.begin(), cnt_rsp.end(), 0);

  cin >> r >> a >> n;

  for (int i = 0; i < r; i++)
    v.push_back(cnt_rsp);
  for (int i = 0; i < n; i++) {
    cin >> b;
    for (int j = 0; j < r; j++) {
      if (b[j] == 'R')
        v[j][0]++;
      else if (b[j] == 'S')
        v[j][1]++;
      else
        v[j][2]++;
    }
  }

  int rspmx;

  for (int i = 0; i < r; i++) {
    if (a[i] == 'R')
      ans += (v[i][0] + v[i][1] * 2);
    else if (a[i] == 'S')
      ans += (v[i][1] + v[i][2] * 2);
    else
      ans += (v[i][2] + v[i][0] * 2);
    rspmx = max(v[i][0] + v[i][1] * 2,
                max(v[i][1] + v[i][2] * 2, v[i][2] + v[i][0] * 2));
    ans_mx += rspmx;
  }

  cout << ans << "\n" << ans_mx << '\n';

  return 0;
}
