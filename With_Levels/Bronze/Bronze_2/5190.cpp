// problem: Aerospace & Mechanical Engineering
// id: 5190
// time taken:
#include <bits/stdc++.h>
using namespace std;
const double G = 9.81;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(2);
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int n;
        double rm, ans = 0, v = 0;
        cin >> n >> rm;
        double *m = (double *)malloc(sizeof(double) * n);
        double *t = (double *)malloc(sizeof(double) * n);
        double *f = (double *)malloc(sizeof(double) * n);
        for (int i = 0; i < n; i++)
        {
            cin >> m[i] >> t[i] >> f[i];
            rm += m[i];
        }
        for (int i = 0; i < n; i++)
        {
            double a = f[i] / rm;
            ans += v * t[i] + 0.5 * (a - G) * t[i] * t[i];
            v += (a - G) * t[i];
            rm -= m[i];
        }
        cout << round(ans * 100) / 100 << '\n';
    }

    return 0;
}