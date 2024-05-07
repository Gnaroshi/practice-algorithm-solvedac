// problem: 스위트콘 가격 구하기
// id: 30030
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

  double x;
  cin >> x;
  cout << fixed;
  cout.precision(0);
  cout << x / 11 * 10 << '\n';

  return 0;
}
