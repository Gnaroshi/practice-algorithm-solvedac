#include <bits/stdc++.h>
using namespace std;

int n, l, k;
int ans = 0;
int diff[105];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> l >> k;
    for (int i = 0; i < n; i++)
    {
        int e, h;
        cin >> e >> h;
        if (h <= l)
            diff[i] = 140;
        else if (e <= l)
            diff[i] = 100;
    }
    sort(diff, diff + n, greater<int>());
    for (int i = 0; i < k; i++)
        ans += diff[i];
    cout << ans << '\n';
    return 0;
}