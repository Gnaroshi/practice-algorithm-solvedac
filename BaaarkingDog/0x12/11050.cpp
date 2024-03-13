#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    int ans = 1;
    for (int i = k + 1; i <= n; i++)
    {
        ans *= i;
    }
    for (int i = 1; i <= n - k; i++)
    {
        ans /= i;
    }
    cout << ans << '\n';

    return 0;
}