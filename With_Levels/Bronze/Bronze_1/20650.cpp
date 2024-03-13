// problem: Do You Know Your ABCs?
// id: 20650
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> v(7);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    ll a = v.front(), bc = v.back() - a, b, c;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 2; j < 6; j++)
        {
            if (v[i] + v[j] == bc)
            {
                b = min(v[i], v[j]);
                c = max(v[i], v[j]);
                cout << a << ' ' << b << ' ' << c << '\n';
                return 0;
            }
        }
    }

    return 0;
}