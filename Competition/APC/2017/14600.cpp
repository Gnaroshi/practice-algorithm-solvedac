#include <bits/stdc++.h>
using namespace std;

int k, x, y;
int side_len = 1;
int tile_idx = 1;
int board[300][300];

bool find_drain(int x, int y, int s)
{
    for (int i = x; i < x + s; i++)
        for (int j = y; j < y + s; j++)
            if (board[i][j] != 0)
                return true;
    return false;
}

void func(int x, int y, int s)
{
    if (s == 1)
        return;

    s = int(s / 2);
    if (!find_drain(x, y, s))
        board[x + s - 1][y + s - 1] = tile_idx;
    if (!find_drain(x, y + s, s))
        board[x + s - 1][y + s] = tile_idx;
    if (!find_drain(x + s, y, s))
        board[x + s][y + s - 1] = tile_idx;
    if (!find_drain(x + s, y + s, s))
        board[x + s][y + s] = tile_idx;

    tile_idx++;
    func(x, y, s);
    func(x + s, y, s);
    func(x, y + s, s);
    func(x + s, y + s, s);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> k >> x >> y;
    board[y - 1][x - 1] = -1;
    for (int i = 0; i < k; i++)
        side_len *= 2;
    if ((side_len * side_len - 1) % 3 != 0)
    {
        cout << -1 << '\n';
        return 0;
    }
    func(0, 0, side_len);
    // for (int i = 0; i < side_len; i++)
    for (int i = side_len - 1; i >= 0; i--)
    {
        for (int j = 0; j < side_len; j++)
            cout << board[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}