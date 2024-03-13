// problem: 가지 산사태
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, k;
    cin >> n >> m >> k;
    bool isOk = true;
    ll tm = 0;
    // ll *fw = (ll *)malloc(sizeof(ll) * n + 1);
    // fill(fw, fw + n + 1, 0);
    for (ll i = 1; i <= m; i++)
    {
        ll t, r;
        cin >> t >> r;
        if (isOk)
        {
            if (tm + r > k)
            {
                cout << i << " 1";
                isOk = false;
            }
            else
                tm += r;
            // for (ll j = 1; j <= t; j++)
            // {
            //     if (fw[j] + r > k)
            //     {
            //         cout << i << ' ' << j;
            //         isOk = false;
            //         break;
            //     }
            //     else
            //         fw[j] += r;
            // }
        }
    }
    if (isOk)
        cout << -1;

    return 0;
}