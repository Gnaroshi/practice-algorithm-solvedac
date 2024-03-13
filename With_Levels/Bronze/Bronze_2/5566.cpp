// problem: 주사위 게임
// id: 5566
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t, cnt = 0, cur = 1, ans = 0;
    cin >> n >> m;
    bool isEnd = true;
    int *b = (int *)malloc(sizeof(int) * n + 1);
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        cnt++;
        if (isEnd)
        {
            if (cur + t >= n)
            {
                isEnd = false;
                ans = cnt;
            }
            if (isEnd)
            {
                cur += t;
                cur += b[cur];
                if (cur >= n)
                {
                    isEnd = false;
                    ans = cnt;
                }

                if (cur < 1)
                    cur = 1;
            }
        }
    }
    cout << ans;

    return 0;
}