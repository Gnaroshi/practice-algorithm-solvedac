// problem: K번 - 케이크 두 개
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x, y;
    vector<pair<ll, ll>> a, b;
    for (int i = 0; i < 4; i++)
    {
        cin >> x >> y;
        a.push_back({x, y});
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> x >> y;
        b.push_back({x, y});
    }
    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());
    // ll x1 = a[0].first + a[3].first, y1 = a[0].second + a[1].second;
    // ll x2 = b[0].first + b[3].first, y2 = b[0].second + b[1].second;
    ll x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    for (int i = 0; i < 4; i++)
    {
        x1 += a[i].first;
        y1 += a[i].second;
        x2 += b[i].first;
        y2 += b[i].second;
    }

    // y = (y2-y1)/(x2-x1)x - (y2-y1)/(x2-x1)x1 + y1
    //(u*x1+y1*v)/(v*2)
    ll u = y2 - y1, v = x2 - x1;
    if (u % v == 0 && (y1 * v - u * x1) % (4 * v) == 0)
        cout << u / v << ' ' << (y1 * v - u * x1) / (4 * v);
    else
    {
        ll r, q, tu = u, tv = v;
        while (true)
        {
            q = tu / tv;
            r = tu % tv;
            if (r == 0)
                break;
            tu = tv;
            tv = r;
        }
        if (u * v < 0)
            cout << '-';
        cout << abs(u / tv) << '/' << abs(v / tv) << ' ';
        // (u * x1 + y1 * v) / (2 * v)
        tu = y1 * v - u * x1, tv = v * 4;
        while (true)
        {
            q = tu / tv;
            r = tu % tv;
            if (r == 0)
                break;
            tu = tv;
            tv = r;
        }
        if (((y1 * v - u * x1) < 0 && v > 0) || ((y1 * v - u * x1) > 0 && v < 0))
            cout << '-';
        cout << abs((y1 * v - u * x1) / tv) << '/' << abs((v * 4) / tv);
    }

    return 0;
}