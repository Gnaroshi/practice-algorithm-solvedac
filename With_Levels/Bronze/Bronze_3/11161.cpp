// problem: Negative People in Da House
// id: 11161
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
        int m, cnt = 0, a, b, mx = 0;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            cnt += a - b;
            if (cnt < 0)
            {
                mx += cnt;
                cnt = 0;
            }
        }
        cout << -1 * mx << '\n';
    }

    return 0;
}