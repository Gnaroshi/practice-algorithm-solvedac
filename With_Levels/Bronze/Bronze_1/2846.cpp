// problem: 오르막길
// id: 2846
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, s, t, mx = 0;
    cin >> n >> b;
    n--;
    s = b;
    while (n--)
    {
        cin >> t;
        if (t <= b)
        {
            s = b = t;
            continue;
        }
        mx = max(mx, t - s);
        b = t;
    }
    cout << mx;

    return 0;
}