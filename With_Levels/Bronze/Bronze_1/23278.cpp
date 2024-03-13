// problem: 영화 평가
// id: 23278
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, h;
    cin >> n >> l >> h;
    double s = 0, t;
    vector<double> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
        s += t;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < l; i++)
        s -= v[i];
    for (int i = 0; i < h; i++)
        s -= v[n - i - 1];
    cout << fixed;
    cout.precision(10);
    cout << s / (n - l - h);

    return 0;
}