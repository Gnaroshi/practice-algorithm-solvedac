#include <bits/stdc++.h>
using namespace std;

#define MX_R 200

int board[MX_R];
int dist[MX_R];
int n, m;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;
        board[u] = v - u;
    }
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        board[u] = v - u;
    }

    fill(dist, dist + MX_R, -1);

    queue<int> q;
    q.push(1);
    dist[1] = 0;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int i = 1; i <= 6; i++)
        {
            int nxt = cur + i;
            if (dist[nxt] > 0)
                continue;
            if (board[nxt] != 0)
                nxt = nxt + board[nxt];
            //이동한 곳에 대한 dist를 고려해야 한다.
            if (dist[nxt] == -1 && nxt <= 100)
            {
                dist[nxt] = dist[cur] + 1;
                q.push(nxt);
            }
        }
        if (cur == 100)
            break;
    }
    // for (int i = 1; i <= 100; i++)
    // {
    //     cout << "board[" << i << "]: " << board[i] << '\n';
    // }
    // for (int i = 1; i <= 100; i++)
    // {
    //     cout << "dist[" << i << "]: " << dist[i] << '\n';
    // }
    cout << dist[100] << '\n';

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define MX_R 200

// int board[MX_R];
// int dist[MX_R];
// int n, m;

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         board[u] = v;
//     }
//     for (int i = 1; i <= m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         board[u] = v;
//     }

//     fill(dist, dist + MX_R, -1);

//     queue<int> q;
//     q.push(1);
//     dist[1] = 0;
//     // vist[1] = true;
//     // cout << "ok\n";
//     while (!q.empty())
//     {
//         int cur = q.front();
//         q.pop();

//         if (dist[100] != -1)
//             break;
//         // cout << cur << '\n';

//         for (int i = 1; i <= 6; i++)
//         {
//             int nxt = cur + i;
//             if (board[nxt] != 0)
//             {
//                 nxt = board[nxt];
//             }
//             if (dist[nxt] == -1 && nxt <= 100)
//             {
//                 dist[nxt] = dist[cur] + 1;
//                 q.push(nxt);
//             }
//         }
//     }
//     // for (int i = 1; i <= 100; i++)
//     // {
//     //     cout << "board[" << i << "]: " << board[i] << '\n';
//     // }
//     // for (int i = 1; i <= 100; i++)
//     // {
//     //     cout << "dist[" << i << "]: " << dist[i] << '\n';
//     // }
//     cout << dist[100] << '\n';

//     return 0;
// }