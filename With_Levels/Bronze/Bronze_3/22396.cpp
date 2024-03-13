// problem: カレー作り
// id: 22396
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double r0, w0, c, r;
    while (true)
    {
        cin >> r0 >> w0 >> c >> r;
        if (r0 + w0 + c + r == 0)
            break;
        if (r0 / w0 >= c)
            cout << 0 << '\n';
        else
        {
            int ans = 0;
            while (r0 / w0 < c)
            {
                ans++;
                r0 += r;
            }
            cout << ans << '\n';
        }
    }

    return 0;
}