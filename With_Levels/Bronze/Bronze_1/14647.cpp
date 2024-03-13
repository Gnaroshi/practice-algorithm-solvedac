// problem: 준오는 조류혐오야!!
// id: 14647
// time taken:
#include <bits/stdc++.h>
using namespace std;

int brd[501][501];

int fn(int n)
{
    int ret = 0;
    while (n > 0)
    {
        ret += (n % 10 == 9);
        n /= 10;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t, cnt = 0, mx = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            brd[i][j] = fn(t);
            cnt += brd[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        t = 0;
        for (int j = 0; j < m; j++)
            t += brd[i][j];
        mx = max(mx, t);
    }
    for (int i = 0; i < m; i++)
    {
        t = 0;
        for (int j = 0; j < n; j++)
            t += brd[j][i];
        mx = max(mx, t);
    }

    cout << cnt - mx;

    return 0;
}