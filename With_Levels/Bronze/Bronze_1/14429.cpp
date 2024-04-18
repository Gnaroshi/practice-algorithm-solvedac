// problem: 배스킨라빈스 31
// id: 14429
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, ans = 0, mn = 0x3f3f3f3f;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int j, m, k;
        cin >> j >> m;
        k = (j - 1) % (m + 1);
        k = (j - k) / m + 1;
        if (mn > k)
        {
            ans = i;
            mn = k;
        }
    }
    cout << ans << " " << mn * 2 << '\n';

    return 0;
}

// 19 % 7 = 5
// 5 12 19