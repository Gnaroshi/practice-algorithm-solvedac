// problem: Skew Binary
// id: 4678
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string s;
        cin >> s;
        if (s == "0")
            break;
        int t = 2, ans = 0, iter = s.length();
        for (int i = iter - 1; i >= 0; i--)
        {
            ans += (t - 1) * (s[i] - '0');
            t *= 2;
        }
        cout << ans << '\n';
    }

    return 0;
}