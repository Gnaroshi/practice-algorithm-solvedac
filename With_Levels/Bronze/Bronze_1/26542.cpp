// problem: Square Pen
// id: 26542
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
        int n, ans = 0;
        cin >> n;
        vector<string> v(n);
        for (auto &i : v)
            cin >> i;
        bool chk;
        for (int sz = n; sz > 0; sz--)
        {
            chk = false;
            for (int ii = 0; ii < n - sz + 1; ii++)
            {
                for (int jj = 0; jj < n - sz + 1; jj++)
                {
                    chk = true;
                    for (int i = ii; i < ii + sz; i++)
                    {
                        for (int j = jj; j < jj + sz; j++)
                        {
                            if (v[i][j] == '#')
                            {
                                chk = false;
                                break;
                            }
                        }
                        if (!chk)
                            break;
                    }
                    if (chk)
                        break;
                }
                if (chk)
                    break;
            }
            if (chk)
            {
                ans = sz;
                break;
            }
        }
        cout << ans * ans << '\n';
    }

    return 0;
}