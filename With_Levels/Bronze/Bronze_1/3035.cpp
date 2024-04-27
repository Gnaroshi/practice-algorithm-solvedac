// problem: 스캐너
// id: 3035
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int r, c, zr, zc;
  cin >> r >> c >> zr >> zc;

  vector<string> v(r);
  for (auto &i : v)
    cin >> i;

  for (int i = 0; i < r; i++) {
    for (int ri = 0; ri < zr; ri++) {
      for (int j = 0; j < c; j++) {
        for (int cj = 0; cj < zc; cj++)
          cout << v[i][j];
      }
      cout << '\n';
    }
  }

  return 0;
}
