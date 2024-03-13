// problem: GBus count (Small)
// id: 12184
// time taken:
#include <bits/stdc++.h>
using namespace std;

int ct[501];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        fill(ct, ct + 501, 0);
        int n, a, b, c, p;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            for (int j = a; j <= b; j++)
                ct[j]++;
        }
        cin >> p;
        for (int i = 0; i < p; i++)
        {
            cin >> c;
            v.emplace_back(c);
        }
        for (int i = 0; i < p; i++)
            cout << ct[v[i]] << ((i < p - 1) ? ' ' : '\n');
    }

    return 0;
}