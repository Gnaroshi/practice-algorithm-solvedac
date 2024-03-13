// problem: Baskets of Gold Coins
// id: 4850
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, w, d, s, t;
    while (cin >> n >> w >> d >> s)
    {
        t = n * (n - 1) / 2 * w;
        if ((t - s) / d)
            cout << (t - s) / d << '\n';
        else
            cout << n << '\n';
    }

    return 0;
}