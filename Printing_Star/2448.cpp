#include <bits/stdc++.h>
using namespace std;

#define MX 10000

int n;
char board[MX][MX];

void solv(int sze, int row, int col)
{
    if (sze == 1)
    {
        board[row][col] = '*';
        board[row + 1][col + 1] = '*';
        board[row + 1][col - 1] = '*';
        for (int i = -2; i < 3; i++)
        {
            board[row + 2][col + i] = '*';
        }
        return;
    }

    int temp = sze / 2;
    solv(temp, row, col);
    solv(temp, row + temp * 3, col - temp * 3);
    solv(temp, row + temp * 3, col + temp * 3);
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    for (int i = 0; i < MX; i++)
    {
        fill(board[i], board[i] + MX, ' ');
    }
    solv(n / 3, 0, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n * 2 + 1; j++)
        {
            // if (board[i][j] == 1)
            //     cout << '*';
            // else
            //     cout << ' ';
            cout << board[i][j];
        }
        cout << '\n';
    }

    return 0;
}