// problem: Sharing Birthdays
// id: 25840
// time taken:
#include <bits/stdc++.h>
using namespace std;
int d[12][31];

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
        d[(s[0] - '0') * 10 + s[1] - '0' - 1][(s[3] - '0') * 10 + s[4] - '0' - 1]++;
    }
    int ans = 0;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 31; j++)
            if (d[i][j] != 0)
                ans++;
    cout << ans;

    return 0;
}