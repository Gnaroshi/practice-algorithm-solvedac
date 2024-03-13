// problem: 피보나치 수
// id: 2747
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll tb[100];
ll solv(ll n)
{
    if (n <= 1)
        return tb[max(0LL, n)];
    if (tb[n] != -1)
        return tb[n];
    tb[n] = solv(n - 1) + solv(n - 2);
    return tb[n];
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(tb, tb + 100, -1);
    tb[0] = 0;
    tb[1] = 1;

    ll n;
    cin >> n;
    solv(n);
    cout << tb[n];

    return 0;
}