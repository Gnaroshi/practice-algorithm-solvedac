// problem: Bicycle
// id: 20233
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, x, b, y, t;
    cin >> a >> x >> b >> y >> t;
    cout << 21 * max(t - 30, 0) * x + a << ' ' << 21 * max(t - 45, 0) * y + b;

    return 0;
}