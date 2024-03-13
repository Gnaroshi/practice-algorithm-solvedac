// problem: Divide and Conquer
// id: 5768
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    int dvs[5001];
    for (int i = 0; i < 5001; i++)
    {
        int cnt = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
                if (i / j != j)
                    cnt++;
            }
        }
        dvs[i] = cnt;
    }

    while (true)
    {
        cin >> m >> n;
        if (!m && !n)
            break;

        int mx = -1, x, y;
        for (int i = m; i <= n; i++)
        {
            if (dvs[i] >= mx)
            {
                x = i;
                y = dvs[i];
                mx = dvs[i];
            }
        }
        cout << x << ' ' << y << '\n';
    }

    return 0;
}