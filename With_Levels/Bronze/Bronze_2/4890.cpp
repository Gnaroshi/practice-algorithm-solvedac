// problem: Tiles of Tetris, NOT!
// id: 4890
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(ll r, ll q)
{
    ll t;
    while (q != 0)
    {
        t = r % q;
        r = q;
        q = t;
    }
    return r;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll w, h, t;
    while (true)
    {
        cin >> w >> h;
        if (w + h == 0)
            break;
        t = gcd(w, h);
        cout << w * h / t / t << '\n';
    }

    return 0;
}