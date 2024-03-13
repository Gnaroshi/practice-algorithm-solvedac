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
        int n;
        cin >> n;
        int ans = 0;
        int t = 0;
        for (int i = 1; i <= n; i++)
        {
            t += i;
            ans += i * (t + i + 1);
        }
        cout << ans << '\n';
    }

    return 0;
}