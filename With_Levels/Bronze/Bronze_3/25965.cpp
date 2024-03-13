// problem: 미션 도네이션
// id: 25965
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int m;
        ll ans = 0;
        cin >> m;
        ll **kda = (ll **)malloc(sizeof(ll *) * m);
        ll sb[3] = {0};
        for (int i = 0; i < m; i++)
            kda[i] = (ll *)malloc(sizeof(ll) * 3);

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> kda[i][j];
            }
        }
        for (int i = 0; i < 3; i++)
            cin >> sb[i];
        for (int i = 0; i < m; i++)
        {
            ans += max(0ll, sb[0] * kda[i][0] - sb[1] * kda[i][1] + sb[2] * kda[i][2]);
        }
        cout << ans << '\n';
    }

    return 0;
}