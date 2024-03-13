// problem: 1차원 2048과 쿼리
// id: 27515
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[64], tcnt[64];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll t, mx;

    while (n--)
    {
        cin >> t;
        bool chk = (t < 0);

        if (t)
        {
            if (chk)
            {
                t *= -1;
                cnt[int(log2(t))]--;
            }
            else
                cnt[int(log2(t))]++;
        }
        copy(cnt, cnt + 64, tcnt);
        for (int i = 0; i < 63; i++)
        {
            if (tcnt[i] >= 2)
                tcnt[i + 1] += tcnt[i] / 2;
        }
        for (int i = 63; i >= 0; i--)
        {
            if (tcnt[i])
            {
                mx = 1;
                cout << (mx << i) << '\n';
                break;
            }
            if (tcnt[i] == 0 && i == 0)
                cout << 0 << '\n';
        }
    }

    return 0;
}
// 4611686018427387904