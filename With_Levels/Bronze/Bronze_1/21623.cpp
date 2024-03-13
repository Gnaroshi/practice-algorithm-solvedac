// problem: Game
// id: 21623
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, t, cur, nxt, rd = 0;
    cin >> k >> n;
    cur = n;
    while (k--)
    {
        cin >> t;
        nxt = cur - t;
        if (nxt == 0)
        {
            rd++;
            if (k == 0)
                cur = 0;
            else
                cur = n;
        }
        else if (nxt > 0)
            cur = nxt;
    }
    cout << rd << '\n'
         << cur;

    return 0;
}