// problem: 이면수와 임현수
// id: 1291
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
const int MX = 3000;

bool isp[MX], chk[MX];
vector<int> p;

bool ims(int n) {
  if (n <= 5 && n != 4)
    return false;
  int t = 0, tn = n;
  while (tn > 0) {
    t += tn % 10;
    tn /= 10;
  }
  if (t % 2 == 0)
    return false;
  return true;
}
bool ihs(int n) {
  if (n == 2 || n == 4)
    return true;

  for (auto i : p) {
    if (i == n)
      return false;
  }

  int cnt = 0, tn = n;
  fill(chk, chk + MX, false);
  while (tn > 1) {
    for (auto i : p) {
      if (tn % i == 0) {
        while (tn % i == 0) {
          tn /= i;
        }
        chk[i] = 1;
      }
    }
  }
  for (auto i : p) {
    if (chk[i] == 1)
      cnt++;
  }
  if (cnt % 2 == 1)
    return false;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  fill(isp, isp + MX, true);
  for (int i = 2; i < MX; i++) {
    if (isp[i]) {
      p.push_back(i);
    }
    for (auto j : p) {
      if (i * j >= MX)
        break;
      isp[i * j] = 0;
      if (i % j == 0)
        break;
    }
  }

  int n;
  cin >> n;
  if (n == 1) {
    cout << 3;
    return 0;
  }

  bool i1 = ims(n), i2 = ihs(n);

  if (i1 && i2)
    cout << 4;
  else if (i1)
    cout << 1;
  else if (i2)
    cout << 2;
  else
    cout << 3;

  return 0;
}
