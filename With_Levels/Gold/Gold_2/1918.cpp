// problem: 후위 표기식
// id: 1918
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

int odr(char c) {
  if (c == '*' || c == '/')
    return 2;
  if (c == '+' || c == '-')
    return 1;
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, ans = "";
  cin >> s;
  stack<char> post;

  for (auto i : s) {
    if (i == '(') {
      post.push(i);
    } else if (i == ')') {
      while (!post.empty() && post.top() != '(') {
        ans += post.top();
        post.pop();
      }
      post.pop();
    } else if (i == '*' || i == '/' || i == '+' || i == '-') {
      while (!post.empty()) {
        if (odr(post.top()) < odr(i)) {
          break;
        }
        ans += post.top();
        post.pop();
      }
      post.push(i);
    } else {
      ans += i;
    }
  }

  while (!post.empty()) {
    ans += post.top();
    post.pop();
  }

  cout << ans << "\n";

  return 0;
}
