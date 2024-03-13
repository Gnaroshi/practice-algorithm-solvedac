#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[3], b[3];
    int ans = 0;
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];

    for (int i = 0; i < 3; i++)
    {
        ans += (max(0, b[i] - a[i]));
    }
    cout << ans << '\n';
    return 0;
}