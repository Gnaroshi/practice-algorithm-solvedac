// problem: 침투
// id: 13565
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int board[1005][1005];
int vist[1005][1005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < n; j++)
            board[i][j] = temp[j] - '0';
    }

    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
        if (board[0][i] == 0)
            q.push({0, i});

    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int cx = cur.first + dx[dir];
            int cy = cur.second + dy[dir];
            if (cx < 0 || cx >= m || cy < 0 || cy >= n)
                continue;
            if (board[cx][cy] != 0)
                continue;
            if (vist[cx][cy] != 0)
                continue;
            if (board[cx][cy] == 0 && cx == m - 1)
            {
                cout << "YES\n";
                return 0;
            }

            vist[cx][cy] = 1;
            q.push({cx, cy});
        }
    }
    cout << "NO\n";
    return 0;
}