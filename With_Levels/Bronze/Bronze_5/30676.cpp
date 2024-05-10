// problem: 이 별은 무슨 색일까
// id: 30676
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

  int n;
  cin >> n;

  if (620 <= n && 780 >= n)
    cout << "Red" << '\n';
  else if (590 <= n && 620 > n)
    cout << "Orange" << '\n';
  else if (570 <= n && 590 > n)
    cout << "Yellow" << '\n';
  else if (495 <= n && 570 > n)
    cout << "Green" << '\n';
  else if (450 <= n && 495 > n)
    cout << "Blue" << '\n';
  else if (425 <= n && 450 > n)
    cout << "Indigo" << '\n';
  else if (380 <= n && 425 > n)
    cout << "Violet" << '\n';

  return 0;
}
