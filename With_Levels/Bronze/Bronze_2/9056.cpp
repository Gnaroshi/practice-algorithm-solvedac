// problem: Letter Bank
// id: 9056
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
        string r, s;
        cin >> r >> s;
        bool al[26] = {0};
        bool usd[26] = {0};
        int iter = r.length();
        for (int i = 0; i < iter; i++)
        {
            al[r[i] - 'A'] = 1;
            usd[r[i] - 'A'] = 1;
        }
        iter = s.length();
        bool chk = true;
        for (int i = 0; i < iter; i++)
        {
            if (!al[s[i] - 'A'])
            {
                chk = false;
                break;
            }
            else
                usd[s[i] - 'A'] = 0;
        }
        for (int i = 0; i < 26; i++)
        {
            if (usd[i])
            {
                chk = false;
                break;
            }
        }
        if (chk)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}