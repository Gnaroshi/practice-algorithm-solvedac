#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long ans = 0;
    while (true)
    {
        int n;
        cin >> n;
        if (n < 0)
        {
            cout << ans << '\n';
            return 0;
        }
        ans += n;
    }

    return 0;
}