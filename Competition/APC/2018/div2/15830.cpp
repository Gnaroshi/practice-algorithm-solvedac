#include <bits/stdc++.h>
using namespace std;

double v, w, d;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> v >> w >> d;

    double factor = d * ((v * v) / (w * w)) / 5;
    int ans = 0;
    double temp = 0;
    double mul = 1;
    while (temp < factor)
    {
        temp += mul;
        mul /= (0.64);
        if (temp >= factor)
            break;
        ans++;
    }
    cout << ans << '\n';

    return 0;
}