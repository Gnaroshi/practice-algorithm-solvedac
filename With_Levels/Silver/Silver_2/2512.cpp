// problem: 예산
// id: 2512
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, mn = 0x3f3f3f3f, mx = -1, c, s = 0;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
    {
        cin >> i;
        s += i;
    }
    cin >> m;
    if (s <= m)
    {
        cout << *max_element(v.begin(), v.end());
        return 0;
    }
    mn = 0;
    mx = *max_element(v.begin(), v.end());
    c = (mn + mx) / 2;
    while (true)
    {
        if (mn > mx)
            break;
        s = 0;
        for (auto i : v)
            s += min(i, c);
        if (s == m)
            break;
        else
        {
            if (s > m)
                mx = c - 1;
            else if (s < m)
                mn = c + 1;
            c = (mn + mx) / 2;
        }
    }
    cout << c;

    return 0;
}