// problem: 01타일
// id: 1904
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
const int MD = 15746;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, f1 = 1, f2 = 2, f;
  cin >> n;

  if (n == 1)
    cout << 1 << "\n";
  else if (n == 2)
    cout << 2 << "\n";
  else {
    for (int i = 2; i < n; i++) {
      f = (f1 + f2) % MD;
      f1 = f2;
      f2 = f;
    }
    cout << f << '\n';
  }

  return 0;
}
