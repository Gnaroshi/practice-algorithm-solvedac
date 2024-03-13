// problem: <code>apt upgrade</code>
// id: 30489
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    double s = 0, d = 0, t;
    cin >> n >> m >> k;
    vector<double> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s += t;
        v.emplace_back(t);
    }
    sort(v.begin(), v.end(), greater<>());
    m += k;
    for (int i = 0; i < m; i++)
        d += v[i];
    cout << fixed;
    cout.precision(6);
    cout << d / s * 100.0;

    return 0;
}