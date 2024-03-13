// problem: Investing at the Market (Small)
// id: 12539
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        int m, p, mx = 0, t, a, b;
        cin >> m;
        vector<int> v;
        for (int i = 0; i < 12; i++)
        {
            cin >> p;
            v.push_back(p);
        }
        for (int i = 0; i < 11; i++)
        {
            if (v[i] > m)
                continue;
            for (int j = i + 1; j < 12; j++)
            {
                if (v[j] > v[i])
                {
                    t = (m / v[i]) * v[j] + m - (m / v[i]) * v[i];
                    if (mx < t)
                    {
                        mx = t;
                        a = i, b = j;
                    }
                    else if (mx == t)
                    {
                        if (v[a] > v[i])
                            a = i, b = j;
                    }
                }
            }
        }
        if (!mx)
            cout << "IMPOSSIBLE\n";
        else
            cout << a + 1 << ' ' << b + 1 << ' ' << mx - m << '\n';
    }

    return 0;
}