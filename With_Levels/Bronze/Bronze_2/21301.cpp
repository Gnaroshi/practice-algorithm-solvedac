// problem: Comfy Deviations
// id: 21301
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double t = 0, s = 0;
    vector<double> v(10);
    for (auto &i : v)
    {
        cin >> i;
        t += i;
    }
    t /= 10.0;
    for (auto i : v)
        s += ((i - t) * (i - t));
    cout << ((sqrt(s / 9.0) <= 1.0) ? "COMFY" : "NOT COMFY");

    return 0;
}