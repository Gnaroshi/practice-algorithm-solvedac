// problem: Speeding
// id: 18154
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 0, t, d, bt, bd;
    cin >> n >> bt >> bd;
    for (int i = 1; i < n; i++)
    {
        cin >> t >> d;
        mx = max(mx, (d - bd) / (t - bt));
        bt = t, bd = d;
    }
    cout << mx;

    return 0;
}