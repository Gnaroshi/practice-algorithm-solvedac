// problem: A번 - 2023 아주머학교 프로그래딩 정시머힌
// id:
// tag:
// time taken:

#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

char ori[7] = {'a', 'c', 'i', 'j', 'n', 'o', 't'};
char mod[7] = {'@', '[', '!', ';', '^', '0', '7'};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  cin.ignore();
  while (tc--) {
    string s, ans = "";
    getline(cin, s);
    int iter = s.length(), len = 0, cnt = 0;
    bool isTr = true;
    for (int i = 0; i < iter; i++) {
      len++;
      if (isalpha(s[i]))
        ans += s[i];
      else {
        cnt++;
        bool chk = false;
        for (int j = 0; j < 7; j++) {
          if (s[i] == mod[j]) {
            ans += ori[j];
            chk = true;
            break;
          }
        }
        if (!chk) {
          bool tchk = true;
          if (s[i] == '\\' && i + 1 < iter) {
            if (s[i + 1] == '\\' && i + 2 < iter) {
              if (s[i + 2] == '\'') {
                ans += 'w';
                i += 2;
              } else
                tchk = false;

            } else if (s[i + 1] == '\'') {
              ans += 'v';
              i += 1;
            } else
              tchk = false;
          } else
            tchk = false;
          if (!tchk) {
            isTr = false;
            break;
          }
        }
      }
    }
    if (!isTr || cnt >= (len / 2 + len % 2))
      cout << "I don't understand\n";
    else
      cout << ans << '\n';
  }

  return 0;
}
