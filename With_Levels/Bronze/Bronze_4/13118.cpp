#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p[4];
    for (int i = 0; i < 4; i++)
        cin >> p[i];

    int x, y, r;
    cin >> x >> y >> r;

    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        if (p[i] == x)
            ans = i + 1;
    }
    cout << ans << '\n';

    return 0;
}