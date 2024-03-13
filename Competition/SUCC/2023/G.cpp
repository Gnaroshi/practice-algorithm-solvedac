// problem: G번 - 기하가 너무 좋아
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int comb(int n, int r)
{
    ll a, b, t;
    a = b = 1;
    while (r)
    {
        a *= n;
        b *= r;
        t = __gcd(a, b);
        a /= t;
        b /= t;
        n--;
        r--;
    }
    return a;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int p = (n + 1) * (m + 1);
    cout << comb(p, 3) / 4;
    return 0;
}