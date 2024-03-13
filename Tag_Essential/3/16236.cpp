#include <bits/stdc++.h>
using namespace std;

int board[21][21];
int dist[21][21];
int tme = 0;
int cnt = 0;
int bs_size = 2;
int bs_x, bs_y;
int dist_min, dist_min_x, dist_min_y;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // set board
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            board[i][j] = temp;
            if (temp == 9)
            {
                bs_x = i;
                bs_y = j;
                board[i][j] = 0;
            }
        }
    }

    // search
    while (true)
    {
        // initalization
        dist_min = 401;
        dist_min_x = 21;
        dist_min_y = 21;

        for (int i = 0; i < n; i++)
        {
            fill(dist[i], dist[i] + n, -1);
        }

        // bfs
        queue<pair<int, int>> Q;
        dist[bs_x][bs_y] = 0;
        Q.push({bs_x, bs_y});

        while (!Q.empty())
        {
            auto cur = Q.front();
            Q.pop();

            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                    continue;
                if (dist[nx][ny] != -1 || board[nx][ny] > bs_size)
                    continue;

                dist[nx][ny] = dist[cur.first][cur.second] + 1;

                if (board[nx][ny] != 0 && board[nx][ny] < bs_size)
                {
                    if (dist_min > dist[nx][ny])
                    {
                        dist_min_x = nx;
                        dist_min_y = ny;
                        dist_min = dist[nx][ny];
                    }

                    else if (dist_min == dist[nx][ny])
                    {
                        if (dist_min_x == nx)
                        {
                            if (dist_min_y > ny)
                            {
                                dist_min_x = nx;
                                dist_min_y = ny;
                            }
                        }
                        else if (dist_min_x > nx)
                        {
                            dist_min_x = nx;
                            dist_min_y = ny;
                        }
                    }
                }
                Q.push({nx, ny});
            }
        }

        if (dist_min_x < 21 && dist_min_y < 21)
        {
            tme += dist[dist_min_x][dist_min_y];
            cnt++;

            if (cnt == bs_size)
            {
                bs_size++;
                cnt = 0;
            }

            board[dist_min_x][dist_min_y] = 0;
            bs_x = dist_min_x;
            bs_y = dist_min_y;
        }
        else
            break;
    }

    cout << tme << '\n';

    return 0;
}