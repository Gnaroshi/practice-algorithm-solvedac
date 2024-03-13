#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mx, my, m;
    int x[4], y[4];
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];
    cin >> x[2] >> y[2];
    cin >> x[3] >> y[3];

    mx = max(x[1], x[3]) - min(x[0], x[2]);
    my = max(y[1], y[3]) - min(y[0], y[2]);
    m = max(mx, my);
    cout << m * m << '\n';

    return 0;
}