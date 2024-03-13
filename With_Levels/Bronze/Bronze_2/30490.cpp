// problem: Battle Bots
// id: 30490
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll b[62];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1, n;
    for (int i = 1; i < 62; i++)
        b[i] = t, t *= 2;
    cin >> n;
    n -= 1;
    for (int i = 61; i >= 0; i--)
    {
        if (b[i] <= n)
        {
            cout << i + 1;
            break;
        }
    }

    return 0;
}