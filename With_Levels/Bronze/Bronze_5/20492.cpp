#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans1 = n - n * 22 / 100;
    int ans2 = n - n * 20 / 100 * 22 / 100;
    cout << ans1 << ' ' << ans2 << '\n';

    return 0;
}