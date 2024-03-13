#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 1;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
            ans += i;
        cout << ans << '\n';
    }
    return 0;
}