// problem: Standing Ovation (Small)
// id: 12166
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        int sm, ans = 0, ts = 0;
        string k;
        cin >> sm >> k;
        for (int i = 0; i < sm; i++)
        {
            ts += k[i] - '0';
            if (ts < i + 1)
            {
                ans += i + 1 - ts;
                ts += i + 1 - ts;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}