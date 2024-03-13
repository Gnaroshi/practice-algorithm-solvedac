// problem: Time Limits
// id: 16427
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, t, mx = -1;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mx = max(mx, t);
    }
    cout << (mx * s - 1) / 1000 + 1;

    return 0;
}