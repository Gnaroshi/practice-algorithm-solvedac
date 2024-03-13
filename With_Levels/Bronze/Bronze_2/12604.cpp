// problem: Store Credit (Large)
// id: 12604
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
        int c, p, mx = 0, a, b;
        cin >> c >> p;
        vector<int> v(p);
        for (auto &i : v)
            cin >> i;
        for (int i = 0; i < p - 1; i++)
        {
            if (v[i] > c)
                continue;
            for (int j = i + 1; j < p; j++)
            {
                if (v[i] + v[j] > mx && v[i] + v[j] <= c)
                {
                    mx = v[i] + v[j];
                    a = i, b = j;
                }
            }
        }
        cout << a + 1 << ' ' << b + 1 << '\n';
    }

    return 0;
}