// problem: C번 - 주식 시뮬레이션
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    ll cs, p, g, t, b, d, slc;
    string s, a;
    cin >> n >> cs >> q;
    map<string, ll> m, h;
    vector<vector<string>> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> g >> s >> p;
        v[g].push_back(s);
        m.insert({s, p});
        h.insert({s, 0});
    }
    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> a >> b;
            if (b * m[a] <= cs)
            {
                h[a] += b;
                cs -= m[a] * b;
            }
        }
        else if (t == 2)
        {
            cin >> a >> b;
            if (h[a] != 0)
            {
                slc = max(h[a] - b, 0LL);
                cs += (h[a] - slc) * m[a];
                h[a] = slc;
            }
        }
        else if (t == 3)
        {
            cin >> a >> b;
            m[a] += b;
        }
        else if (t == 4)
        {
            cin >> d >> b;
            for (auto i : v[d])
                m[i] += b;
        }
        else if (t == 5)
        {
            cin >> d >> b;
            b = 100 + b;
            for (auto i : v[d])
                m[i] = m[i] * b / 1000 * 10;
        }
        else if (t == 6)
            cout << cs << '\n';
        else
        {
            ll as = 0;
            for (auto i = h.begin(); i != h.end(); i++)
            {
                if (i->second != 0)
                {
                    as += m[i->first] * i->second;
                }
            }
            cout << cs + as << '\n';
        }
    }
    return 0;
}