// problem: Fading Wind
// id: 27579
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, k, v, s, ans = 0;
    cin >> h >> k >> v >> s;
    while (h > 0)
    {
        v += s;
        v -= max(1, v / 10);
        if (v >= k)
            h++;
        else if (v > 0 && v < k)
        {
            h--;
            if (h == 0)
                v = 0;
        }
        else
            h = v = 0;
        ans += v;
        if (s > 0)
            s--;
    }
    cout << ans;

    return 0;
}