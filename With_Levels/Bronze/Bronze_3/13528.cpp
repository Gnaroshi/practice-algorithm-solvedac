// problem: Grass Seed Inc.
// id: 13528
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double c, ans = 0, w, h;
    int l;
    cin >> c >> l;
    for (int i = 0; i < l; i++)
    {
        cin >> w >> h;
        ans += w * h;
    }
    cout << fixed;
    cout.precision(7);
    cout << ans * c;

    return 0;
}