// problem: Countdown
// id: 23905
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
        int n, k, ans = 0;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        if (n < k)
        {
            cout << 0 << '\n';
            continue;
        }
        for (int i = 0; i <= n - k; i++)
        {
            int bef = k;
            bool chk = true;
            for (int j = i; j < i + k; j++)
            {
                if (v[j] != bef)
                {
                    chk = false;
                    break;
                }
                bef--;
            }
            if (chk)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}