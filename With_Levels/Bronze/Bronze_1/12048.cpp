// problem: Sums of Sums (Small)
// id: 12048
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ":\n";
        ll n, q, a, b;
        cin >> n >> q;
        vector<ll> v(n), ts(n + 1), gen;
        for (auto &i : v)
            cin >> i;
        ts[0] = 0;
        for (int i = 0; i < n; i++)
            ts[i + 1] = ts[i] + v[i];

        gen.push_back(0);
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                gen.push_back(ts[j] - ts[i]);

        sort(gen.begin(), gen.end());

        ll iter = n * (n + 1) / 2;
        for (ll i = 0; i < iter; i++)
            gen[i + 1] += gen[i];
        while (q--)
        {
            cin >> a >> b;
            cout << gen[b] - gen[a - 1] << '\n';
        }
    }

    return 0;
}