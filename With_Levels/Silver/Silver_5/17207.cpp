// problem: 돌려막기
// id: 17207
// tag:
// time taken:

#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

string hima[5] = {"Inseo", "Junsuk", "Jungwoo", "Jinwoo", "Youngki"};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vvll a(5, vll(5)), b(5, vll(5)), c(5, vll(5));
  vpll w(5);
  for (int i = 0; i < 5; i++)
    w[i].first = 0, w[i].second = i;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> b[i][j];
    }
  }

  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      ll t = 0;
      for (int i = 0; i < 5; i++) {
        t += a[x][i] * b[i][y];
      }
      c[x][y] = t;
    }
  }

  for (int x = 0; x < 5; x++) {
    ll t = 0;
    for (int y = 0; y < 5; y++) {
      t += c[x][y];
    }
    w[x].first = t;
  }

  sort(w.begin(), w.end());
  ll mn = w.front().first;
  vi ans;
  for (int i = 0; i < 5; i++) {
    if (w[i].first == mn)
      ans.push_back(w[i].second);
    else
      break;
  }
  sort(ans.begin(), ans.end(), greater<>());
  cout << hima[ans.front()] << '\n';

  return 0;
}
