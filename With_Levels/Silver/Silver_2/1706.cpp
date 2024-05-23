// problem: 크로스워드
// id: 1706
// tag:
// time taken:

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int r, c;
  cin >> r >> c;
  vector<string> v, brd(r);

  for (int i = 0; i < r; i++) {
    cin >> brd[i];
  }

  string t;
  for (int i = 0; i < r; i++) {
    t = "";
    for (int j = 0; j < c; j++) {
      if (brd[i][j] != '#')
        t += brd[i][j];
      else {
        if (t.length() > 1) {
          v.push_back(t);
        }
        t = "";
      }
    }
    if (t.length() > 1)
      v.push_back(t);
  }

  for (int i = 0; i < c; i++) {
    t = "";
    for (int j = 0; j < r; j++) {
      if (brd[j][i] != '#')
        t += brd[j][i];
      else {
        if (t.length() > 1) {
          v.push_back(t);
        }
        t = "";
      }
    }
    if (t.length() > 1)
      v.push_back(t);
  }

  sort(v.begin(), v.end());
  cout << v.front() << '\n';
  return 0;
}
