// problem: Tarifa
// id: 13484
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n, p, t = 0;
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        t += x - p;
        if (t < 0)
            t = 0;
    }
    cout << t + x;

    return 0;
}