// problem: Pole
// id: 8716
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c, d, aa, bb, cc, dd;
    cin >> a >> b >> c >> d >> aa >> bb >> cc >> dd;
    if (a > cc || b < dd || c < aa || d > bb)
        cout << 0;
    else
        cout << abs((min(c, cc) - max(a, aa)) * (min(b, bb) - max(d, dd)));

    return 0;
}

// (a, b) (c, d)
// (aa, bb) (cc, dd)