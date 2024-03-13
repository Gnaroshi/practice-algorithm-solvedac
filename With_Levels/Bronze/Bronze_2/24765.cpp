// problem: Mia
// id: 24765
// time taken:
#include <bits/stdc++.h>
using namespace std;

int val(int a, int aa)
{
    int ret;
    if ((a == 1 && aa == 2) || (aa == 1 && a == 2))
        ret = 700;
    else if (a == aa)
        ret = a * 110;
    else
        ret = max(a, aa) * 10 + min(a, aa);
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, aa, b, bb;
    while (true)
    {
        cin >> a >> aa >> b >> bb;
        if (a + aa + b + bb == 0)
            break;
        int o = val(a, aa);
        int t = val(b, bb);
        if (o > t)
            cout << "Player 1 wins.\n";
        else if (o < t)
            cout << "Player 2 wins.\n";
        else
            cout << "Tie.\n";
    }

    return 0;
}