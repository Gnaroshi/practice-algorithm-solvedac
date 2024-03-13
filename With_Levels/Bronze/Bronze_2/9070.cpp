// problem: 장보기
// id: 9070
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
        int n, ans;
        double w, c, mx = -1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> w >> c;
            if (mx < w / c)
            {
                mx = w / c;
                ans = int(c);
            }
            else if (abs(mx - w / c) < 0.000000001)
            {
                ans = min(ans, int(c));
            }
        }
        cout << ans << '\n';
    }

    return 0;
}