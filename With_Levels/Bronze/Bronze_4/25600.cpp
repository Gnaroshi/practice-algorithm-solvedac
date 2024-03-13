// problem: Triathlon
// id: 25600
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        int a, d, g, t;
        cin >> a >> d >> g;
        t = a * (d + g);
        if (a == d + g)
            t *= 2;
        if (mx < t)
            mx = t;
    }
    cout << mx;

    return 0;
}