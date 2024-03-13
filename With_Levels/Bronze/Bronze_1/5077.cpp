// problem: Maps
// id: 5077
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
        int li, ci, lm, cm, ans = 0;
        cin >> li >> ci;
        vector<string> rig(li);
        for (auto &i : rig)
            cin >> i;
        cin >> lm >> cm;
        vector<string> m(lm);
        for (auto &i : m)
            cin >> i;
        for (int i = 0; i <= lm - li; i++)
        {
            for (int j = 0; j <= cm - ci; j++)
            {
                bool chk = true;
                for (int ii = 0; ii < li; ii++)
                {
                    for (int jj = 0; jj < ci; jj++)
                    {
                        if (m[i + ii][j + jj] != rig[ii][jj])
                        {
                            chk = false;
                            break;
                        }
                    }
                    if (!chk)
                        break;
                }
                if (chk)
                    ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}