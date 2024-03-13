// problem: G번 - 브실이의 불침번 근무
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, a = 1, b = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        a *= m;
        a %= 1000000007;
    }
    m--;
    for (int i = 0; i < n; i++)
    {
        b *= m;
        b %= 1000000007;
    }
    a -= b;
    if (a < 0)
        a += 1000000007;
    cout << a;

    return 0;
}