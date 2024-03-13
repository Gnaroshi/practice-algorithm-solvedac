// problem: MINESWEEPER
// id: 24357
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int brd[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> brd[i][j];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (brd[i][j] == 9)
                continue;
            for (int dir = 0; dir < 8; dir++)
            {
                int nx = i + dx[dir];
                int ny = j + dy[dir];
                if (nx < 0 || nx > 2 || ny < 0 || ny > 2)
                    continue;
                if (brd[nx][ny] == 9)
                    brd[i][j]++;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << brd[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}