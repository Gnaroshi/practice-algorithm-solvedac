// problem: Два станка
// id: 24867
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, a, x, b, y;
    cin >> k >> a >> x >> b >> y;
    ll aa, bb;
    aa = max((k - a) * x, 0ll) + max((k - a - b) * y, 0ll);
    bb = max((k - a - b) * x, 0ll) + max((k - b) * y, 0ll);

    cout << max(aa, bb);

    return 0;
}
