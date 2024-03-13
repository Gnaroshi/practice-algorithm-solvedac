// problem: Bovine Genomics (Bronze)
// id: 14531
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0;
    cin >> n >> m;
    vector<string> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    bool *achk = new bool[4];
    bool *bchk = new bool[4];
    for (int i = 0; i < m; i++)
    {
        bool chk = true;
        fill(achk, achk + 4, 0);
        fill(bchk, bchk + 4, 0);
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] == 'A')
                achk[0] = 1;
            else if (a[j][i] == 'G')
                achk[1] = 1;
            else if (a[j][i] == 'T')
                achk[2] = 1;
            else if (a[j][i] == 'C')
                achk[3] = 1;
            if (b[j][i] == 'A')
                bchk[0] = 1;
            else if (b[j][i] == 'G')
                bchk[1] = 1;
            else if (b[j][i] == 'T')
                bchk[2] = 1;
            else if (b[j][i] == 'C')
                bchk[3] = 1;
        }
        for (int j = 0; j < 4; j++)
        {
            if (achk[j] == bchk[j] && achk[j])
            {
                chk = false;
                break;
            }
        }
        ans += chk;
    }
    cout << ans;

    return 0;
}