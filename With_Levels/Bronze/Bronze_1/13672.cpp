// problem: Sub-prime
// id: 13672
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, n, d, c, v;
    while (true)
    {
        cin >> b >> n;
        if (b + n == 0)
            break;
        vector<int> r(b);
        for (auto &i : r)
            cin >> i;
        while (n--)
        {
            cin >> d >> c >> v;
            r[d - 1] -= v, r[c - 1] += v;
        }
        bool chk = true;
        for (auto i : r)
        {
            if (i < 0)
            {
                chk = false;
                break;
            }
        }
        cout << (chk ? 'S' : 'N') << '\n';
    }

    return 0;
}