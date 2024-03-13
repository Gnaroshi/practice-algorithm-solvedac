// problem: Parity Bit
// id: 5343
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        int cnt = 0;
        cin >> s;
        int iter = s.length() / 8;
        for (int i = 0; i < iter; i++)
        {
            int t = i * 8;
            int c = 0;
            for (int j = t; j < t + 7; j++)
            {
                if (s[j] % 2 == 1)
                    c++;
            }
            if (c % 2 + s[t + 7] % 2 == 1)
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}