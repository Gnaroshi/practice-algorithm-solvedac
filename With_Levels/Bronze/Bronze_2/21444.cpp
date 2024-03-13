// problem: Космические захватчики
// id: 21444
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, ans = 0, t;
    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        ans += t;
    }
    if (p == 1 || p == n)
        cout << ans + n - 1;
    else
        cout << ans + n - 1 + min(p - 1, n - p);
    return 0;
}