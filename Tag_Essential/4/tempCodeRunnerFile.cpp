#include <bits/stdc++.h>
using namespace std;

int n, k;
int dist[2000002];
int ans = 0;
int mn = 0x3f3f3f3f;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    queue<int> q;
    q.push(n);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        if (cur == k)
        {
            if (ans == 0)
            {
                mn = dist[cur];
            }
        }

        if (cur < 0 || cur > 100001)
            continue;
        for (auto nxt : {cur + 1, cur - 1, cur * 2})
        {
            if (dist[nxt] == 0)
            {
                q.push(nxt);
                dist[nxt] = dist[cur] + 1;
            }
            if (nxt == k)
            {
                if (nxt <= mn)
                    ans++;
            }
        }
    }
    cout << dist[k] << '\n'
         << ans << '\n';

    return 0;
}