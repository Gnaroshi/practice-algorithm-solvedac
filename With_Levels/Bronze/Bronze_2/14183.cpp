// problem: Key Maker
// id: 14183
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    while (true)
    {
        cin >> m >> n;
        if (!m && !n)
            break;
        int *c = (int *)malloc(sizeof(int) * m);
        int tr, ans = 0;
        for (int i = 0; i < m; i++)
            cin >> c[i];
        for (int i = 0; i < n; i++)
        {
            bool chk = true;
            for (int j = 0; j < m; j++)
            {
                cin >> tr;
                if (tr > c[j])
                    chk = false;
            }
            if (chk)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}