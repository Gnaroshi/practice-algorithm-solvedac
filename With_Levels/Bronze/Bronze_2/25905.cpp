// problem: 장인은 도구를 탓하지 않는다
// id: 25905
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(7);
    double p = 1;
    vector<double> v(10);
    for (auto &i : v)
        cin >> i;
    p = v.front();
    for (int i = 1; i < 10; i++)
        p *= (v[i] / double(i)) * 10.0;
    p /= *min_element(v.begin(), v.end());
    cout << p;

    return 0;
}