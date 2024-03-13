// problem: 초콜릿 피라미드
// id: 25793
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll r, c, a, b, t;
        cin >> r >> c;
        a = min(r, c), b = abs(r - c);
        t = a * (a + 1) * (2 * a + 1) / 3 + a * a * (b - 1);
        cout << t << ' ' << t - a << '\n';
    }

    return 0;
}