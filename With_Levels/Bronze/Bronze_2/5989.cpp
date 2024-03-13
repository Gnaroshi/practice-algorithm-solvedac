// problem: The Robot Plow
// id: 5989
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, n;
    cin >> x >> y >> n;
    bool **chk = (bool **)malloc(sizeof(bool *) * x + 1);
    for (int i = 0; i < x + 1; i++)
    {
        chk[i] = (bool *)malloc(sizeof(bool) * y + 1);
        fill(chk[i], chk[i] + y + 1, false);
    }
    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = a; i <= c; i++)
        {
            for (int j = b; j <= d; j++)
            {
                chk[i][j] = true;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
            if (chk[i][j])
                ans++;
    }
    cout << ans;

    return 0;
}