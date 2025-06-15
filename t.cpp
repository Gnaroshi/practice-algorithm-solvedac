// // problem:
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;

// int y, m, d;
// int mt[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> y >> m >> d >> t;
//     t += d;
//     while (t)
//     {
//         if ((y % 4 == 0 && y % 100) || y % 400 == 0)
//             mt[1] = 29;
//         else
//             mt[1] = 28;
//         if (mt[m - 1] < t)
//         {
//             t -= mt[m - 1];
//             m++;
//         }
//         else
//             break;
//         if (m > 12)
//         {
//             y++;
//             m = 1;
//         }
//     }
//     cout << y << ' ' << m << ' ' << t << '\n';

//     return 0;
// }

// // problem:
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     string s = "rgjgmbuyhbfcx";
//
//     for (int i = 0; i < 26; i++)
//     {
//         for (auto j : s)
//         {
//             cout << char((j - 'a' + i) % 26 + 'a');
//         }
//         cout << '\n';
//     }
//     return 0;
// }

// problem:
// id:
// tag:
// time taken:

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
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
using vs = vector<string>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s =
      "The single-photon time-of-flight depth imaging system uses the time it "
      "takes for a laser pulse to travel from the system to a point on an "
      "object and back to calculate the distance to the object. These "
      "time-of-flight measurements are then repeated for points across the "
      "object to obtain 3D information. The new system uses an ultrasensitive "
      "detector called a superconducting nanowire single-photon detector "
      "(SNSPD) developed by the MIT and JPL research groups. The SNSPD can "
      "detect a single photon of light, which means that lasers with very low "
      "powers, including eye-safe lasers, can be used to perform measurements "
      "in a very short time and over long distances. To reduce noise levels, "
      "the detector was cooled to just below 1 Kelvin in a compact cryocooler "
      "system designed and built by the University of Glasgow group. The "
      "researchers combined the cooled SNSPD with a new custom single-pixel "
      "scanning transceiver operating at a 1550-nm wavelength that was "
      "designed by McCarthy at Heriot-Watt University. They also added "
      "advanced timing equipment to measure extremely precise time "
      "intervals—accurate down to trillionths of a second (picoseconds). To "
      "put that into perspective, in just 1,000 picoseconds, light can travel "
      "about 300 millimeters (about 1 foot). This precision made it possible "
      "to distinguish surfaces separated by about 1 mm in depth from 325 "
      "meters away.";

  for (auto &i : s) {
    cout << (i & 15) << "\n";
  }

  return 0;
}
