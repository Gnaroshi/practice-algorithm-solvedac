// problem: Гонки на машинках
// id: 29653
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double mn = 0x3f3f3f3f, t;
    cin >> n;
    vector<double> x(n), v(n);
    for (int i = 0; i < n; i++)
        cin >> x[i] >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((x[i] - x[j]) * (v[i] - v[j]) >= 0)
                continue;
            t = (x[j] - x[i]) / (v[i] - v[j]);
            mn = min(mn, t);
        }
    }
    cout << fixed;
    cout.precision(6);
    cout << mn;

    return 0;
}