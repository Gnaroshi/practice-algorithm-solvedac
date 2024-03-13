#include <bits/stdc++.h>
using namespace std;

#define MX 22

int n;
int board_temp[MX][MX];
int board[MX][MX];
int max_block = -1;

void rotate_ccw()
{
    int temp_board[MX][MX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp_board[i][j] = board_temp[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board_temp[j][n - 1 - i] = temp_board[i][j];
        }
    }
}

void mov()
{
    int row = 0;
    int col = 0;

    for (int i = 0; i < n; i++)
    {
        stack<int> S;
        for (int j = 0; j < n; j++)
        {
            if (board_temp[i][j] != 0)
            {
                S.push(board_temp[i][j]);
            }
        }
        if (S.empty())
            continue;
        fill(board_temp[i], board_temp[i] + n, 0);

        int loc = 1;
        while (!S.empty())
        {
            int cur = S.top();
            S.pop();
            if (!S.empty())
            {
                if (cur == S.top())
                {
                    board_temp[i][n - loc] = cur * 2;
                    S.pop();
                }
                else
                    board_temp[i][n - loc] = cur;
                loc++;
            }
            else
                board_temp[i][n - loc] = cur;
        }
    }
}

void init_board()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
}

void copy_board()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            board_temp[i][j] = board[i][j];
}

void rotate_board(int dir)
{
    for (int i = 0; i < dir; i++)
        rotate_ccw();

    mov();

    if (dir != 0)
        for (int i = 0; i < 4 - dir; i++)
            rotate_ccw();
}

int get_4_pow(int int_pow)
{
    int ret = 1;
    for (int i = 0; i < int_pow; i++)
    {
        ret *= 4;
    }
    return ret;
}

void solv()
{
    int iter = get_4_pow(5);
    for (int tmp = 0; tmp < iter; tmp++)
    {
        copy_board();
        int brute = tmp;
        for (int i = 0; i < 5; i++)
        {
            int dir = brute % 4;
            brute /= 4;
            rotate_board(dir);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (max_block < board_temp[i][j])
                    max_block = board_temp[i][j];
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    init_board();
    solv();

    cout << max_block << '\n';
    return 0;
}