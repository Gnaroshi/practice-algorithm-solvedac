#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m;
    cin >> h >> m;
    int ans = (h - 9) * 60 + m;
    cout << ans << '\n';

    return 0;
}