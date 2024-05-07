// problem: 삼각형
// id: 29751
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

  double w, h;
  cin >> w >> h;
  cout << fixed;
  cout.precision(1);
  cout << w * h / 2;

  return 0;
}
