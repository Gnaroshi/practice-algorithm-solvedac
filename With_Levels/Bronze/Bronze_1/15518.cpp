// problem: Window
// id: 15518
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h, w, x, ans = 0;
    cin >> n >> h >> w;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    w *= 2;
    for (int i = 0; i < n; i += 2)
        ans += min(v[i] + v[i + 1], w - v[i] - v[i + 1]);

    cout << ans * h;

    return 0;
}