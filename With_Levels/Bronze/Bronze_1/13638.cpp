// problem: Coral Perfeito
// id: 13638
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        ll sm = 0, av = 0, ans = 0;
        vector<ll> v(n);
        for (auto &i : v)
            cin >> i, sm += i;
        if (sm % n)
        {
            cout << -1 << '\n';
            continue;
        }
        av = sm / n;
        for (auto &i : v)
            ans += abs(av - i);
        cout << ans / 2 + 1 << '\n';
    }

    return 0;
}