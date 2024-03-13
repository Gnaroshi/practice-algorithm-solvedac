// problem: Baza
// id: 12115
// time taken:
#include <bits/stdc++.h>
using namespace std;
int n, m, q, t;
int brd[1005][1005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> brd[i][j];
    }
    cin >> q;
    while (q--)
    {
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            cin >> t;
            v.emplace_back(t);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            bool chk = true;
            for (int j = 0; j < m; j++)
            {
                if (v[j] == -1)
                    continue;
                if (v[j] != brd[i][j])
                {
                    chk = false;
                    break;
                }
            }
            cnt += chk;
        }
        cout << cnt << '\n';
    }

    return 0;
}