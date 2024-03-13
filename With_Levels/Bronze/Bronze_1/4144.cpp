// problem: Alien Communicating Machines
// id: 4144
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll x, y, t = 1, xz = 0;
        string z, ret = "";
        char c;
        cin >> x >> y >> z;
        for (auto i = z.end() - 1; i >= z.begin(); i--)
        {
            c = *i;
            if (isalpha(c))
                xz += t * (c - 'A' + 10);
            else
                xz += t * (c - '0');
            t *= x;
        }
        while (xz > 0)
        {
            if (xz % y > 9)
                ret += char(xz % y - 10 + 'A');
            else
                ret += char(xz % y + '0');
            xz /= y;
        }
        if (!ret.empty())
        {
            reverse(ret.begin(), ret.end());
            cout << ret << '\n';
        }
        else
            cout << 0 << '\n';
    }

    return 0;
}