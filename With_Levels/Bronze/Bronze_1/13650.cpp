// problem: Botas perdidas
// id: 13650
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        int lc[61] = {0}, rc[61] = {0};
        int sz, ans = 0;
        char c;
        for (int i = 0; i < n; i++)
        {
            cin >> sz >> c;
            if (c == 'D')
                lc[sz]++;
            else
                rc[sz]++;
        }
        for (int i = 0; i < 61; i++)
        {
            ans += min(lc[i], rc[i]);
        }
        cout << ans << '\n';
    }

    return 0;
}