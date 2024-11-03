# // // problem: 초성 변환
# // // id: 12090
# // // tag:
# // // time taken:
# //
# // #include <algorithm>
# // #include <cmath>
# // #include <iostream>
# // #include <map>
# // #include <numeric>
# // #include <queue>
# // #include <set>
# // #include <stack>
# // #include <string>
# // #include <unordered_map>
# // #include <vector>
# //
# // using namespace std;
# // using ll = long long;
# //
# // using pii = pair<int, int>;
# // using pll = pair<ll, ll>;
# // using vi = vector<int>;
# // using vvi = vector<vi>;
# // using vpi = vector<pii>;
# // using vvpi = vector<vpi>;
# // using vb = vector<bool>;
# // using vd = vector<double>;
# // using vll = vector<ll>;
# // using vvll = vector<vll>;
# // using vpll = vector<pll>;
# // using vvpll = vector<vpll>;
# // using qi = queue<int>;
# // using si = stack<int>;
# //
# // string s[] = {"ㄱ", "ㄲ", "ㄴ", "ㄷ", "ㄸ", "ㄹ", "ㅁ", "ㅂ", "ㅃ", "ㅅ",
# //               "ㅆ", "ㅇ", "ㅈ", "ㅉ", "ㅊ", "ㅋ", "ㅌ", "ㅍ", "ㅎ"};
# //
# // string fn(wchar_t c) { return s[(c - 0xAC00) / (21 * 28)]; }
# //
# // int main(void) {
# //   ios::sync_with_stdio(false);
# //   cin.tie(nullptr);
# //
# //   wstring str;
# //   getline(wcin, str);
# //
# //   for (auto i : str) {
# //     cout << fn(i);
# //   }
# //
# //   return 0;
# // }
# problem: 초성 변환
# id: 12090
# time taken:

s = input()
t = list(map(lambda x: ord(x) - 44032, s))


a = [
    "ㄱ",
    "ㄲ",
    "ㄴ",
    "ㄷ",
    "ㄸ",
    "ㄹ",
    "ㅁ",
    "ㅂ",
    "ㅃ",
    "ㅅ",
    "ㅆ",
    "ㅇ",
    "ㅈ",
    "ㅉ",
    "ㅊ",
    "ㅋ",
    "ㅌ",
    "ㅍ",
    "ㅎ",
]

for c in t:
    print(a[c // 28 // 21], end="")
