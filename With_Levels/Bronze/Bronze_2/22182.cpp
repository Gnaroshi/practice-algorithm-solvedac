// problem: Круговая диаграмма
// id: 22182
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout.precision(9);
    int n;
    double r, s = 0;
    cin >> n >> r;
    r = r * r * M_PI;
    vector<double> v(n);
    for (auto &i : v)
    {
        cin >> i;
        s += i;
    }
    for (auto i : v)
        cout << i / s * r << '\n';
    return 0;
}