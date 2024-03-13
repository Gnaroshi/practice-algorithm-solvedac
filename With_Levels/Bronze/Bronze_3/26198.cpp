// problem: Chronogram
// id: 26198
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
        string s;
        getline(cin, s);
        int ans = 0, iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'I')
                ans += 1;
            else if (s[i] == 'V')
                ans += 5;
            else if (s[i] == 'X')
                ans += 10;
            else if (s[i] == 'L')
                ans += 50;
            else if (s[i] == 'C')
                ans += 100;
            else if (s[i] == 'D')
                ans += 500;
            else if (s[i] == 'M')
                ans += 1000;
        }
        cout << ans << '\n';
    }

    return 0;
}
