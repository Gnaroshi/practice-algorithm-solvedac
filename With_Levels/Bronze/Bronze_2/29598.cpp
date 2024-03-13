// problem: Два формата
// id: 29598
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> v;
    ll n, t = 1, m = 0;
    cin >> n;
    while (n > 0)
    {
        v.push_back(n % 256);
        n /= 256;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        m += t * v[i];
        t *= 256;
    }
    cout << m;

    return 0;
}