// problem: Formula
// id: 13153
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(5);
    double x[3], y[3], r, t, s = 0;
    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];
    cin >> r;
    vector<double> sd;
    for (int i = 0; i < 3; i++)
        sd.emplace_back(sqrt((x[i] - x[(i + 1) % 3]) * (x[i] - x[(i + 1) % 3]) + (y[i] - y[(i + 1) % 3]) * (y[i] - y[(i + 1) % 3])));
    s = sqrt(pow(2 * sd[0] * sd[1], 2.0) - pow(sd[0] * sd[0] + sd[1] * sd[1] - sd[2] * sd[2], 2.0)) / 4.0;
    t = r * (sd[0] + sd[1] + sd[2]) / 2.0;
    cout << (s - t) / t * 100.0;

    return 0;
}