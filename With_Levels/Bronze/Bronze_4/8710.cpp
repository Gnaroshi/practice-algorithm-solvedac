#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, w, m;
    cin >> k >> w >> m;
    int ans = 0;
    while (true)
    {
        if (k + ans * m >= w)
            break;
        else
            ans++;
    }
    cout << ans << '\n';

    return 0;
}