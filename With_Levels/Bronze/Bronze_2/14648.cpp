// problem: 쿼리 맛보기
// id: 14648
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, q;

ll *gs(ll *sm)
{
    ll *t = (ll *)malloc(sizeof(ll) * n);
    t[0] = sm[0];
    for (int i = 1; i < n; i++)
    {
        t[i] = t[i - 1] + sm[i];
    }
    return t;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;
    ll *ns = (ll *)malloc(sizeof(ll) * n);
    ll *sm = (ll *)malloc(sizeof(ll) * n);
    for (int i = 0; i < n; i++)
        cin >> ns[i];
    sm = gs(ns);
    int op, a, b, c, d;
    for (int qr = 0; qr < q; qr++)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> a >> b;
            cout << sm[b - 1] - sm[a - 1] + ns[a - 1] << '\n';
            swap(ns[b - 1], ns[a - 1]);
            sm = gs(ns);
        }
        else
        {
            cin >> a >> b >> c >> d;
            cout << sm[b - 1] - sm[a - 1] + ns[a - 1] - (sm[d - 1] - sm[c - 1] + ns[c - 1]) << '\n';
        }
    }
    return 0;
}