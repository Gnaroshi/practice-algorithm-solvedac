// problem: Boxes
// id: 6846
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    ll a, b, c, vl, ta, tb, tc;
    cin >> n;
    vector<tuple<ll, ll, ll, ll>> v;
    vector<ll> l(3);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> l[j];
        sort(l.begin(), l.end());
        v.push_back({l[0], l[1], l[2], l[0] * l[1] * l[2]});
    }
    sort(v.begin(), v.end());
    cin >> m;
    while (m--)
    {
        ll mn = LLONG_MAX - 1;
        for (int i = 0; i < 3; i++)
            cin >> l[i];
        sort(l.begin(), l.end());
        bool chk = false;
        for (auto i : v)
        {
            tie(a, b, c, vl) = i;
            if (a >= l[0] && b >= l[1] && c >= l[2] && vl < mn)
            {
                mn = vl;
                chk = true;
            }
        }
        if (chk)
            cout << mn << '\n';
        else
            cout << "Item does not fit.\n";
    }

    return 0;
}