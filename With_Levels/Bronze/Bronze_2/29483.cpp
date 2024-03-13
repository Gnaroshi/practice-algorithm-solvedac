// problem: Химия
// id: 29483
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length(), ans = 0, a, t;
    for (int i = 0; i < iter; i++)
    {
        t = 1;
        if (s[i] == 'H')
            a = 1;
        else if (s[i] == 'C')
            a = 12;
        else if (s[i] == 'N')
            a = 14;
        else
            a = 16;
        if (i != iter - 1)
        {
            if (!isalpha(s[i + 1]))
            {
                t = s[i + 1] - '0';
                i++;
            }
        }
        ans += a * t;
    }
    cout << ans;

    return 0;
}