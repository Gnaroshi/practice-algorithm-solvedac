#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= 2;
    }
    cout << ans << '\n';
    return 0;
}