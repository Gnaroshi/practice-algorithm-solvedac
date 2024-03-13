// problem: 엘프의 검
// id: 4436
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    while (cin >> n)
    {
        ll t = n, t2, ans = 1;
        bool chk[10];
        fill(chk, chk + 10, false);
        while (true)
        {
            t2 = t;
            while (t2 > 0)
            {
                chk[t2 % 10] = true;
                t2 /= 10;
            }
            bool fl = true;
            for (int i = 0; i < 10; i++)
            {
                if (chk[i] == false)
                {
                    fl = false;
                    break;
                }
            }
            if (fl)
            {
                cout << ans << '\n';
                break;
            }
            ans++;
            t += n;
        }
    }

    return 0;
}