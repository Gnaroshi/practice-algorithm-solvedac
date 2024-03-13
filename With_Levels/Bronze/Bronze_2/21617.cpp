// problem: Crazy Fencing
// id: 21617
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double ans = 0, t;
    cin >> n;

    cout << fixed;
    cout.precision(7);

    vector<double> h, w;
    for (int i = -1; i < n; i++)
    {
        cin >> t;
        h.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        w.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        ans += (h[i] + h[i + 1]) * w[i] / 2;
    }
    cout << ans;

    return 0;
}