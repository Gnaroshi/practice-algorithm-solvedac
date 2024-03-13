#include <bits/stdc++.h>
using namespace std;

int n, k;
queue<int> Q;
#define mx 100000
int dist[mx + 2];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    fill(dist, dist + mx + 1, -1);
    dist[n] = 0;
    Q.push(n);

    while (dist[k] == -1)
    {
        int cur = Q.front();
        // cout << cur << " " << dist[cur] << '\n';

        Q.pop();
        // if (cur - 1 > 0)
        // {
        //     if (dist[cur - 1] != -1)
        //         continue;
        //     dist[cur - 1] = dist[cur] + 1;
        //     Q.push(cur - 1);
        // }
        // if (cur + 1 < mx)
        // {
        //     if (dist[cur + 1] != -1)
        //         continue;
        //     dist[cur + 1] = dist[cur] + 1;
        //     Q.push(cur + 1);
        // }
        // if (cur * 2 < mx)
        // {
        //     if (dist[cur * 2] != -1)
        //         continue;
        //     dist[cur * 2] = dist[cur] + 1;
        //     Q.push(cur * 2);
        // }
        for (int nxt : {cur - 1, cur + 1, cur * 2})
        {
            if (nxt < 0 || nxt > mx)
                continue;
            if (dist[nxt] >= 0)
                continue;
            dist[nxt] = dist[cur] + 1;
            Q.push(nxt);
        }
    }
    cout << dist[k] << '\n';
    return 0;
}
