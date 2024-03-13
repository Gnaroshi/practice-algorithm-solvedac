// problem:
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int *ex = (int *)malloc(sizeof(int) * n + 1);
    fill(ex, ex + n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        ex[temp]++;
    }

    // cout << "--------------------------\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << ex[i] << ' ';
    // }
    // cout << '\n';

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ex[i] == 0)
        {
            int cnt = 0;
            int loc = i;
            for (int j = i; j <= n; j++)
            {
                if (cnt >= 3)
                {
                    break;
                }
                if (ex[j] != 0)
                {
                    cnt++;
                }
                if (ex[j] == 0)
                {
                    loc = j;
                }
            }
            ans += (loc - i + 1) * 2 + 5;
            for (int j = i; j <= loc; j++)
                ex[j]++;
            // i = loc;
        }
        // cout << "--------------------------\n";
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << ex[i] << ' ';
        // }
        // cout << '\n';
    }
    cout << ans << '\n';

    return 0;
}