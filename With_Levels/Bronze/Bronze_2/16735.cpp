// problem: Congestion Charging Zone
// id: 16735
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, mn = 0x3f3f3f3f, mx = -1, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[1] == ':')
            t = (s[0] - '0') * 60 + (s[2] - '0') * 10 + (s[3] - '0');
        else
            t = (s[0] - '0') * 60 * 10 + (s[1] - '0') * 60 + (s[3] - '0') * 10 + (s[4] - '0');
        if (t >= 390 && t <= 1140)
        {
            mn = min(t, mn);
            mx = max(t, mx);
        }
    }
    if ((390 <= mn && mn <= 600) && (390 <= mx && mx <= 960))
        ans = max(0, 24000);
    if ((390 <= mn && mn <= 600) && (961 <= mx && mx <= 1140))
        ans = max(0, 36000);
    if ((601 <= mn && mn <= 960) && (601 <= mx && mx <= 960))
        ans = max(0, 16800);
    if ((601 <= mn && mn <= 1140) && (961 <= mx && mx <= 1140))
        ans = max(0, 24000);
    cout << ans;

    return 0;
}