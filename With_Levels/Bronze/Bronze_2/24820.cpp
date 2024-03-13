// problem: Spelling Bee
// id: 24820
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    int tc;
    cin >> s >> tc;
    while (tc--)
    {
        cin >> t;
        if (t.length() < 4 || find(t.begin(), t.end(), s[0]) == t.end())
            continue;
        bool chk = true;
        for (auto i : t)
        {
            if (find(s.begin(), s.end(), i) == s.end())
            {
                chk = !chk;
                break;
            }
        }
        if (chk)
            cout << t << '\n';
    }

    return 0;
}