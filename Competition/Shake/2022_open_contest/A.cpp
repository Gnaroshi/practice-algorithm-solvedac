// problem: 팝핀 소다
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int bins[22];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    for (int i = 0; i < 22; i++)
    {
        bins[i] = t;
        t *= 2;
    }

    int n, m, k;
    cin >> n >> m >> k;

    int tor = 0;
    for (int i = 0; i < 22; i++)
    {
        if (bins[i] == n)
        {
            tor = i;
            break;
        }
    }

    int user = 0;
    for (int i = 0; i < 21; i++)
    {
        if (bins[i] <= k && k < bins[i + 1])
        {
            user = i;
            break;
        }
    }

    if (user + m > tor)
        user = tor;
    else
        user += m;
    cout << user << '\n';

    return 0;
}