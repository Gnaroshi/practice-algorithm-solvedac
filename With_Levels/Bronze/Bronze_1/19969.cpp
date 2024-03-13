// problem: Сборка компьютеров
// id: 19969
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[3], b[3], d = 0, ans = 0;
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];
    for (int i = 0; i < 2; i++)
    {
        ans += min(a[i], b[i]);
        a[i] -= min(a[i], b[i]);
        b[i] -= min(a[i], b[i]);
    }
    cout << ans + min(min(a[2], b[0] + b[1]) + b[2], min(b[2], a[0] + a[1]) + a[2]);

    return 0;
}