// problem: Fall 2006: 100 Years of Engineering
// id: 11018
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
        int n;
        double M, ans = 0, v = 0;
        cin >> n >> M;
        vector<double> m(n), t(n), f(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m[i] >> t[i] >> f[i];
            M += m[i];
        }
        for (int i = 0; i < n; i++)
        {
            double a = f[i] / M - G;
            ans += t[i] * v + 0.5 * a * t[i] * t[i];
            v += a * t[i];
            M -= m[i];
        }
        cout << "Data Set " << tcc << ":\n"
             << ans << "\n\n";
    }

    return 0;
}