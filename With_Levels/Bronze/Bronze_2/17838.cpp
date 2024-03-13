// problem: 커맨드
// id: 17838
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        bool chk = false;
        // for segfault
        if (s.length() == 7)
            chk = (s[0] == s[1] && s[0] == s[4] && s[2] == s[3] && s[2] == s[5] && s[2] == s[6] && s[0] != s[2]);
        cout << chk << '\n';
    }

    return 0;
}