// problem: 一般化うるう年
// id: 22389
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, r;
    while (true)
    {
        cin >> n >> l >> r;
        if (n + l + r == 0)
            break;
        int ans = 0;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        for (int i = l; i <= r; i++)
        {
            bool chk = true;
            for (int j = 0; j < n; j++)
            {
                if (!(i % v[j]))
                {
                    ans += !(j % 2);
                    chk = false;
                    break;
                }
            }
            if (chk)
                ans += !(n % 2);
        }
        cout << ans << '\n';
    }

    return 0;
}