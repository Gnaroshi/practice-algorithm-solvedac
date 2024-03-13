// problem: Färgrobot
// id: 21287
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, r, g, b, iter;
string s, t;
bool cr, cg, cb;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> s;
    t = "";
    iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'R')
            cr = 1;
        else if (s[i] == 'G')
            cg = 1;
        else
            cb = 1;
        if (cr && cg && cb)
        {
            t += s[i];
            cr = cg = cb = 0;
            if (t.length() == n)
                break;
        }
    }
    cout << t;

    return 0;
}