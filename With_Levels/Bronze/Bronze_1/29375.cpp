// problem: Реагенты
// id: 29375
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double ans, t;
    cin >> n;
    vector<double> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    ans = v.front();
    for (int i = 1; i < n; i++)
    {
        ans += v[i];
        ans /= 2;
    }
    cout << fixed;
    cout.precision(10);
    cout << ans;
    return 0;
}