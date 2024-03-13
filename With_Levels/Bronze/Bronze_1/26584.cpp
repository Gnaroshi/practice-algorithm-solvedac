// problem: Playtime
// id: 26584
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s, ttl, hs;
        getline(cin, s);
        for (auto i = s.end(); i != s.begin(); i--)
        {
            if (*i == ',')
            {
                ttl = s.substr(0, i - s.begin());
                hs = s.substr(i - s.begin() + 1);
                break;
            }
        }

        int tot, y, d, h, m;
        tot = stoi(hs);
        m = tot % 60;
        h = (tot - m) / 60;
        d = h / 24, h -= d * 24;
        y = d / 365, d -= y * 365;
        cout << ttl << " - ";
        if (y)
            cout << y << " year(s) ";
        if (d)
            cout << d << " day(s) ";
        if (h)
            cout << h << " hour(s) ";
        if (m)
            cout << m << " minute(s)";
        cout << '\n';
    }

    return 0;
}