#include <bits/stdc++.h>
using namespace std;

#define MX 22

int n;
int board_temp[MX][MX];
int board[MX][MX];
int max_block = 0;

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
            board_temp[i][j] = temp_board[j][n - 1 - i];
        }
    }
}

void mov()
{
    for (int i = 0; i < n; i++)
    {
        int row_nums[21] = {};
        int loc = 0;
        for (int j = 0; j < n; j++)
        {
            if (board_temp[i][j] == 0)
                continue;
            if (row_nums[loc] == 0)
            {
                row_nums[loc] = board_temp[i][j];
            }
            else if (row_nums[loc] == board_temp[i][j])
            {
                row_nums[loc] *= 2;
                loc++;
            }
            else
            {
                loc++;
                row_nums[loc] = board_temp[i][j];
            }
        }
        for (int j = 0; j < n; j++)
            board_temp[i][j] = row_nums[j];
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

    // if (dir != 0)
    //     for (int i = 0; i < 4 - dir; i++)
    //         rotate_ccw();
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
    int iter = get_4_pow(10);
    for (int tmp = 0; tmp < iter; tmp++)
    {
        copy_board();
        int brute = tmp;
        for (int i = 0; i < 10; i++)
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