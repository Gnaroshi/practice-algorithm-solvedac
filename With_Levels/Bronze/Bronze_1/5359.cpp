// problem: Music
// id: 5359
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
        int n, m, c;
        cin >> n >> m >> c;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int iter = n - m + 1, ans = 0, mx, mn;
        for (int i = 0; i < iter; i++)
        {
            mx = *max_element(v.begin() + i, v.begin() + i + m);
            mn = *min_element(v.begin() + i, v.begin() + i + m);
            if (mx - mn <= c)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}