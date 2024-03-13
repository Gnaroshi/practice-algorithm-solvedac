// problem: Konduktor
// id: 8805
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, cur = 0, t, r, d = -1;
        cin >> n >> k;
        if (n == 1)
        {
            cout << k << '\n';
            continue;
        }
        vector<int> v(n);
        fill(v.begin(), v.end(), 0);
        t = k / (2 * n - 2);
        r = k % (2 * n - 2);
        v[0] = v[n - 1] = t;
        for (int i = 1; i < n - 1; i++)
            v[i] = 2 * t;

        while (r--)
        {
            v[cur]++;
            if (cur == n - 1 || cur == 0)
                d *= -1;
            cur += d;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << ((i != n - 1) ? ' ' : '\n');
        }
    }

    // _ _ _ _ 4 6 8 2 k / (2n - 2) 1

    return 0;
}