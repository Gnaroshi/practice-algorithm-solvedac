// problem: 골드 러시
// id: 10275
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll bn[63];
ll n, a, b, ans, t = 1;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 63; i++)
        bn[i] = t, t *= 2;

    int tc;
    cin >> tc;
    while (tc--)
    {
        ans = 0;
        cin >> n >> a >> b;
        if (a % 2)
        {
            cout << n << '\n';
            continue;
        }
        t = bn[n];
        while (a)
        {
            if (a >= t)
                a -= t;
            t /= 2;
            ans++;
        }
        cout << ans - 1 << "\n";
    }

    return 0;
}