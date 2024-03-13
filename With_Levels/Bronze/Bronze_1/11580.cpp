// problem: Footprint
// id: 11580
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool chk[2005][2005];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x = 1000, y = 1000, ans = 0;
    chk[1000][1000] = 1;
    string s;
    cin >> n >> s;
    for (auto i : s)
    {
        if (i == 'E')
            x++;
        else if (i == 'W')
            x--;
        else if (i == 'S')
            y--;
        else
            y++;
        chk[x][y] = 1;
    }
    for (int i = 0; i < 2005; i++)
    {
        for (int j = 0; j < 2005; j++)
            ans += chk[i][j];
    }
    cout << ans;

    return 0;
}