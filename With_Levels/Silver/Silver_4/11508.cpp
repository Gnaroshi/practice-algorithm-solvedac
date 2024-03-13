#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int *d = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> d[i];

    sort(d, d + n, greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 2)
            continue;
        ans += d[i];
    }

    cout << ans << '\n';

    return 0;
}