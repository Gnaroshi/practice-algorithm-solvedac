// problem: Gold Coins
// id: 4864
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cn[10001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cd = 1, d = 1;
    for (int i = 1; i < 10001; i++)
    {
        cn[i] = d + cn[i - 1];
        cd--;
        if (cd == 0)
        {
            d++;
            cd = d;
        }
    }

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        cout << n << ' ' << cn[n] << '\n';
    }

    return 0;
}