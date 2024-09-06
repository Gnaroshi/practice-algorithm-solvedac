// // problem: 아기 석환 뚜루루 뚜루
// // id: 15947
// // tag:
// // time taken:
//
// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <map>
// #include <numeric>
// #include <queue>
// #include <set>
// #include <stack>
// #include <string>
// #include <unordered_map>
// #include <vector>
//
// using namespace std;
// using ll = long long;
//
// using pii = pair<int, int>;
// using pll = pair<ll, ll>;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vpi = vector<pii>;
// using vvpi = vector<vpi>;
// using vb = vector<bool>;
// using vd = vector<double>;
// using vll = vector<ll>;
// using vvll = vector<vll>;
// using vpll = vector<pll>;
// using vvpll = vector<vpll>;
// using qi = queue<int>;
// using si = stack<int>;
//
// int main(void) {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//
//   int n;
//   // cin >> n;
//   for (int j = 1; j < 70; j++) {
//     cout << "n: " << j << '\n';
//     vector<string> v = {"baby",   "sukhwan", "tururu", "turu",   "very",
//                         "cute",   "tururu",  "turu",   "in",     "bed",
//                         "tururu", "turu",    "baby",   "sukhwan"};
//     // n--;
//     // 14
//     n = j - 1;
//     int ad = n / 14, wd = n % 14;
//     if (wd % 4 == 2) {
//       if (ad > 2) {
//         cout << "tu+ru*" << ad + (4 - wd) << '\n';
//       } else {
//         string t = v[wd], ru = "ru";
//         for (int i = 0; i < ad; i++)
//           t += ru;
//         cout << t << '\n';
//       }
//     } else if (wd % 4 == 3) {
//       if (ad > 3) {
//         cout << "tu+ru*" << ad + (4 - wd) << '\n';
//       } else {
//         string t = v[wd], ru = "ru";
//         for (int i = 0; i < ad; i++)
//           t += ru;
//         cout << t << '\n';
//       }
//     } else {
//       cout << v[wd] << '\n';
//     }
//   }
//   return 0;
// }

// problem: 아기 석환 뚜루루 뚜루
// id: 15947
// tag:
// time taken:

#include <algorithm>
#include <cmath>
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> v = {"baby",   "sukhwan", "tururu", "turu",   "very",
                      "cute",   "tururu",  "turu",   "in",     "bed",
                      "tururu", "turu",    "baby",   "sukhwan"};
  n--;
  // 14
  int ad = n / 14, wd = n % 14;
  if (wd % 4 == 2) {
    if (ad > 2) {
      cout << "tu+ru*" << ad + (4 - wd % 4) << '\n';
    } else {
      string t = v[wd], ru = "ru";
      for (int i = 0; i < ad; i++)
        t += ru;
      cout << t << '\n';
    }
  } else if (wd % 4 == 3) {
    if (ad > 3) {
      cout << "tu+ru*" << ad + (4 - wd % 4) << '\n';
    } else {
      string t = v[wd], ru = "ru";
      for (int i = 0; i < ad; i++)
        t += ru;
      cout << t << '\n';
    }
  } else {
    cout << v[wd] << '\n';
  }
  return 0;
}
