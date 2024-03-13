#include <bits/stdc++.h>
using namespace std;

#define MX 101

int cnncts[MX][MX];
int vist[MX];
int cnncts_cnt[MX];
int ans[MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        fill(cnncts[i], cnncts[i] + n, 0);
    }
    fill(vist, vist + n + 1, -1);
    fill(ans, ans + n, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cnncts[a][b] = 1;
        cnncts[b][a] = 1;
    }

    for (int i = 1; i <= n; i++)
    {

        queue<int> Q;
        Q.push(i);
        vist[i] = 1;
        while (!Q.empty())
        {
            auto cur = Q.front();
            Q.pop();

            for (int j = 1; j <= n; j++)
            {
                if (cnncts[cur][j] == 1 && vist[j] == -1)
                {

                    Q.push(j);
                    vist[j] = 1;
                    cnncts_cnt[j] = cnncts_cnt[cur] + 1;
                }
            }
        }
        // for (int j = 1; j <= n; j++)
        // {
        //     cout << "vist[" << j << "]: " << vist[j] << " ";
        // }
        // cout << i << "th:  ";
        for (int j = 1; j <= n; j++)
        {
            ans[i] += cnncts_cnt[j];
            // cout << cnncts_cnt[j] << " ";
        }
        // cout << '\n';

        fill(vist, vist + n + 1, -1);
        fill(cnncts_cnt, cnncts_cnt + n + 1, 0);
    }
    // cout << '\n';

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << '\n';

    int min = MX;
    int min_loc;
    for (int i = 1; i <= n; i++)
    {
        if (min > ans[i])
        {
            min = ans[i];
            min_loc = i;
        }
    }

    cout << min_loc << '\n';

    return 0;
}