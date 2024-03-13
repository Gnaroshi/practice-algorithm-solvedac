// problem: Arggggggh!
// id: 15079
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double x, y, t, sq;
    string s;
    cin >> n >> x >> y;
    n--;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        if (s.length() == 2)
        {
            sq = sqrt(t);
            if (s[0] == 'N')
            {
                if (s[1] == 'E')
                {
                    x += sq;
                    y += sq;
                }
                else
                {
                    x -= sq;
                    y += sq;
                }
            }
            else
            {
                if (s[1] == 'E')
                {
                    x += sq;
                    y -= sq;
                }
                else
                {
                    x -= sq;
                    y -= sq;
                }
            }
        }
        else
        {
            if (s[0] == 'E')
                x += t;
            else if (s[0] == 'W')
                x -= t;
            else if (s[0] == 'N')
                y += t;
            else
                y -= t;
        }
    }

    cout << fixed;
    cout.precision(7);
    cout << x << ' ' << y;

    return 0;
}