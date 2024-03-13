// problem: Receptet
// id: 26933
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int h, b, k;
        cin >> h >> b >> k;
        ans += max(0, b - h) * k;
    }
    cout << ans;

    return 0;
}