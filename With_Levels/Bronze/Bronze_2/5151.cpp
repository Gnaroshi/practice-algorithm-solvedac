// problem: Lobbying
// id: 5151
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout.precision(2);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int n, m, T, i, t;
        double d, p = 0, c = 0;
        char vt;
        cin >> n >> m >> T;
        double *ms = (double *)malloc(sizeof(double) * n);
        fill(ms, ms + n, 0);
        for (int j = 0; j < m; j++)
        {
            cin >> i >> t >> d;
            if (0 <= T - t && T - t < 1000)
                ms[i - 1] += d;
        }
        for (int j = 0; j < n; j++)
        {
            cin >> vt;
            if (vt == 'N')
                c += 10000 / (10000 + ms[j]);
            else
                p++;
        }
        cout << p << ' ' << c << "\n\n";
    }

    return 0;
}