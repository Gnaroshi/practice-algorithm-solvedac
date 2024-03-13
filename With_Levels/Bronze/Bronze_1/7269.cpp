// problem: Lygtys
// id: 7269
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s = 0, S, t, an;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> t;
        s += t;
        v.push_back(t);
    }
    cin >> S;
    an = (s - S) / (n - 2);
    for (auto i : v)
        cout << i - an << '\n';
    cout << an << '\n';

    // a1+an, a2+an, ...,an-1+an, S
    // S-an + (n-1)an
    // S + (n - 2)an

    return 0;
}