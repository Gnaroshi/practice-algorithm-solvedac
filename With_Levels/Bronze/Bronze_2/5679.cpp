// problem: Hailstone Sequences
// id: 5679
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll hs[501];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i < 501; i++)
    {
        ll mx = i, t = i;
        while (t != 1)
        {
            if (t % 2)
                t *= 3, t++;
            else
                t /= 2;
            mx = max(t, mx);
        }
        hs[i] = mx;
    }
    int k;
    while (true)
    {
        cin >> k;
        if (!k)
            break;
        cout << hs[k] << '\n';
    }

    return 0;
}