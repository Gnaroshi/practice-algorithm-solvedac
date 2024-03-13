// problem: Roll the Dice
// id: 6856
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int **cnt = (int **)malloc(sizeof(int *) * n + 1);
    for (int i = 0; i <= n; i++)
        cnt[i] = (int *)malloc(sizeof(int) * m + 1);
    for (int i = 0; i <= n; i++)
        fill(cnt[i], cnt[i] + m + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i + j == 10)
                cnt[i][j] = 1;
            // if (i + j > 10)
            //     break;
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (cnt[i][j] == 1)
                ans++;
    if (ans == 1)
        cout << "There is 1 way to get the sum 10.";
    else
        cout << "There are " << ans << " ways to get the sum 10.";

    return 0;
}