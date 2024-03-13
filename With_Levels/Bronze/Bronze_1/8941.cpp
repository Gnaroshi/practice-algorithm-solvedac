// problem: Molar mass
// id: 8941
// time taken:
#include <bits/stdc++.h>
using namespace std;

double saw[4] = {12.01, 1.008, 16.00, 14.01};

int fn(char c)
{
    int l = 0;
    if (c == 'H')
        l = 1;
    else if (c == 'O')
        l = 2;
    else if (c == 'N')
        l = 3;
    return l;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(3);
    while (tc--)
    {
        string s;
        cin >> s;
        double ans = 0, t;
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            t = 0;
            if (i != iter - 1)
            {
                if (isdigit(s[i + 1]))
                {
                    t += (s[i + 1] - '0') * saw[fn(s[i])];
                    if (i != iter - 2)
                    {
                        if (isdigit(s[i + 2]))
                        {
                            t *= 10;
                            t += (s[i + 2] - '0') * saw[fn(s[i])];
                            i += 2;
                            ans += t;
                            continue;
                        }
                    }
                    i++;
                    ans += t;
                    continue;
                }
            }
            ans += saw[fn(s[i])];
        }
        cout << ans << '\n';
    }

    return 0;
}