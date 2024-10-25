// problem: 조옮김
// id: 4732
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
using vll = vector<ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using qi = queue<int>;
using si = stack<int>;

string ns[12] = {"A",  "A#", "B", "C",  "C#", "D",
                 "D#", "E",  "F", "F#", "G",  "G#"};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (true) {
    getline(cin, s);
    if (s == "***")
      break;

    stringstream st;
    st.str(s);
    vector<string> v;
    string t;
    while (st >> t) {
      v.push_back(t);
    }

    int n, cur;
    cin >> n;
    n %= 12;

    vector<string> ans;
    for (auto i : v) {
      if (i == "A")
        cur = 0;
      else if (i == "A#" || i == "Bb")
        cur = 1;
      else if (i == "B" || i == "Cb")
        cur = 2;
      else if (i == "B#" || i == "C")
        cur = 3;
      else if (i == "C#" || i == "Db")
        cur = 4;
      else if (i == "D")
        cur = 5;
      else if (i == "D#" || i == "Eb")
        cur = 6;
      else if (i == "E" || i == "Fb")
        cur = 7;
      else if (i == "E#" || i == "F")
        cur = 8;
      else if (i == "F#" || i == "Gb")
        cur = 9;
      else if (i == "G")
        cur = 10;
      else if (i == "G#" || i == "Ab")
        cur = 11;

      cur += n + 12;
      ans.push_back(ns[cur % 12]);
    }

    int iter = ans.size();
    for (int i = 0; i < iter; i++) {
      cout << ans[i] << (i != iter - 1 ? ' ' : '\n');
    }

    cin.ignore();
  }

  return 0;
}
