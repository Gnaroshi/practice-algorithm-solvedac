// problem: 대회 자리
// id: 5176
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
        int p, m, cnt = 0, t;
        cin >> p >> m;
        bool *chk = (bool *)malloc(sizeof(bool) * m);
        fill(chk, chk + m, 0);
        for (int i = 0; i < p; i++)
        {
            cin >> t;
            if (!chk[t - 1])
                chk[t - 1] = 1;
            else
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}