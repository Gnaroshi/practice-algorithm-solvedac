// problem: Extreme Temperatures
// id: 18309
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int mn = 100, mx = -100;
    while (getline(cin, s))
    {
        int iter = s.length();
        for (int i = 11; i < iter; i++)
        {
            int t = 0;
            bool neg = false;
            if (s[i] == '-')
            {
                i++;
                neg = true;
            }
            if (i + 1 != iter)
            {
                if (s[i + 1] != ' ')
                {
                    t = (s[i] - '0') * 10 + (s[i + 1] - '0');
                    i++;
                }
                else
                    t = (s[i] - '0');
            }
            else
                t = (s[i] - '0');
            if (neg)
                t *= -1;
            i++;
            mn = min(t, mn);
            mx = max(t, mx);
        }
    }
    cout << mn << ' ' << mx;

    return 0;
}