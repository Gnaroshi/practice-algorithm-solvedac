// problem: Cold Compress
// id: 17011
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
        cin >> s;
        int iter = s.length(), cnt = 1;
        char bef = s[0];
        for (int i = 1; i < iter; i++)
        {
            if (bef != s[i])
            {
                cout << cnt << ' ' << bef << ' ';
                cnt = 1;
            }
            else
            {
                cnt++;
            }
            bef = s[i];
        }
        cout << cnt << ' ' << bef << '\n';
    }

    return 0;
}