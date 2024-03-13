// problem: Fake tickets
// id: 5778
// time taken:
#include <bits/stdc++.h>
using namespace std;
int chk[10001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    while (true)
    {
        cin >> n >> m;
        if (n + m == 0)
            break;
        fill(chk, chk + 10001, 0);
        int ans = 0;
        while (m--)
        {
            cin >> t;
            chk[t]++;
        }
        for (int i = 1; i <= 10000; i++)
            if (chk[i] > 1)
                ans++;
        cout << ans << '\n';
    }
    return 0;
}