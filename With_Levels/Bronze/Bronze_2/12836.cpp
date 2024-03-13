// problem: 가계부 (Easy)
// id: 12836
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    ll a, b, c, t;
    cin >> n >> q;
    ll *p = (ll *)malloc(sizeof(ll) * n + 1);
    fill(p, p + n + 1, 0);
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b >> c;
        if (a == 1)
            p[b] += c;
        else
        {
            t = 0;
            for (int j = b; j <= c; j++)
                t += p[j];
            cout << t << '\n';
        }
    }

    return 0;
}