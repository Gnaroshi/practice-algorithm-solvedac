// problem: Letter Cookies
// id: 11117
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, w;
    cin >> tc;
    while (tc--)
    {
        string s;
        int cb[26] = {0};
        int iter;
        cin >> s;
        iter = s.length();
        for (int j = 0; j < iter; j++)
            cb[s[j] - 'A']++;
        cin >> w;
        for (int i = 0; i < w; i++)
        {
            cin >> s;
            iter = s.length();
            int tcb[26];
            copy(begin(cb), end(cb), begin(tcb));
            bool chk = true;
            for (int j = 0; j < iter; j++)
            {
                if (tcb[s[j] - 'A'] == 0)
                {
                    chk = false;
                    break;
                }
                else
                    tcb[s[j] - 'A']--;
            }
            if (chk)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}