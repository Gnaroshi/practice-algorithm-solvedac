// problem: D1번 - 배고파(Hard)
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll bb[61][61];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    a = b = 1;
    for (int i = 0; i < 61; i++)
    {
        b = 1;
        for (int j = 0; j < 61; j++)
        {
            bb[i][j] = a + b;
            b *= 2;
        }
        a *= 2;
    }

    int n;
    cin >> n;
    while (n--)
    {
        ll m;
        ll dif = LLONG_MAX;
        int a, b;
        a = b = 0;
        bool isF = false;

        cin >> m;
        for (int i = 0; i < 61; i++)
        {
            if (isF)
                break;
            for (int j = i; j < 61; j++)
            {
                if (bb[i][j] == m)
                {
                    a = i;
                    b = j;
                    isF = true;
                    break;
                }
                else
                {
                    if (dif > abs(bb[i][j] - m))
                    {
                        a = i;
                        b = j;
                        dif = abs(bb[i][j] - m);
                    }
                }
            }
        }
        cout << a << ' ' << b << '\n';
    }

    return 0;
}