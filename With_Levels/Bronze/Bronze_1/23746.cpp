// problem: 문자열 압축 해제
// id: 23746
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n;
    string s[26], t, ori = "";
    char c;
    fill(s, s + 26, "");
    while (n--)
    {
        cin >> t >> c;
        s[c - 'A'] = t;
    }
    cin >> t;
    for (auto i : t)
        ori += s[i - 'A'];
    cin >> a >> b;
    cout << ori.substr(a - 1, b - a + 1);

    return 0;
}
