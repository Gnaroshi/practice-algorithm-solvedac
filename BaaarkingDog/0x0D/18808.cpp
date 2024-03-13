#include <bits/stdc++.h>
using namespace std;

#define MX_Len 42
#define MX_Size 12

int n, m, k, row, col;
int board[MX_Len][MX_Len];
int grid[MX_Size][MX_Size];

void rotate_grid()
{
    int temp_grid[MX_Size][MX_Size];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp_grid[i][j] = grid[i][j];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            grid[i][j] = temp_grid[row - 1 - j][i];
        }
    }

    // swap을 이용하여 n x m 행렬을 transpose 할 수 있음
    // swap(row, col)
    int temp_num;
    temp_num = row;
    row = col;
    col = temp_num;
    return;
}

bool isPasted(int x, int y)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (board[x + i][y + j] == 1)
            {
                if (grid[i][j] == 1)
                    return false;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == 1)
                board[x + i][y + j] = 1;
        }
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> k;

    while (k--)
    {
        cin >> row >> col;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> grid[i][j];
            }
        }
        // if can attach
        for (int dir = 0; dir < 4; dir++)
        {
            bool isP = false;
            for (int i = 0; i <= n - row; i++)
            {
                if (isP)
                    break;
                for (int j = 0; j <= m - col; j++)
                {
                    if (isPasted(i, j))
                    {
                        isP = true;
                        break;
                    }
                }
            }
            if (isP)
                break;
            rotate_grid();
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans += board[i][j];
        }
    }
    cout << ans << '\n';

    return 0;
}