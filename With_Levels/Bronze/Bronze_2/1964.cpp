// problem: 오각형, 오각형, 오각형…
// id: 1964
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a = 5, ad = 4;
    cin >> n;
    for (ll i = 2; i <= n; i++)
    {
        ad += 3;
        a += ad;
        a %= 45678;
    }
    cout << a % 45678;

    return 0;
}