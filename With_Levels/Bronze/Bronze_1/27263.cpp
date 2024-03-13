// problem: Древний английский
// id: 27263
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
        string s, ans = "";
        cin >> s;
        int iter = s.length();

        bool chk = false;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] != 'o')
                chk = false;
            if (i && s[i] == 's')
            {
                if (i != iter - 1)
                {
                    if (s[i + 1] != 'h')
                    {
                        ans += "th";
                        continue;
                    }
                }
                else if (i == iter - 1)
                {
                    ans += "th";
                    continue;
                }
            }
            if (i == 0 && s[i] == 'e')
            {
                ans += "ae";
                continue;
            }
            if (i == 0 && s[i] == 'E')
            {
                ans += "Ae";
                continue;
            }
            if (!chk && s[i] == 'o' && ans.length() > 0)
            {
                if (ans.back() == 'o' || ans.back() == 'O')
                {
                    ans += "u";
                    chk = true;
                    continue;
                }
            }
            ans += s[i];
        }
        cout << ans << '\n';
    }

    return 0;
}