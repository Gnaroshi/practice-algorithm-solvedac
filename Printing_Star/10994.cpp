#include <bits/stdc++.h>
using namespace std;

#define MX 10001
char board[MX][MX];

void solv(int sze, int row, int col)
{
    if (sze == 1)
    {
        board[row][col] = '*';
        return;
    }

    int temp = sze * 4 - 3;

    for (int i = row; i < row + temp; i++)
    {
        board[row][i] = '*';
        board[row + temp - 1][i] = '*';
        board[i][col] = '*';
        board[i][col + temp - 1] = '*';
    }
    solv(sze - 1, row + 2, col + 2);
}

void print_ans(int sze)
{
    for (int i = 0; i < sze * 4 - 2; i++)
    {
        for (int j = 0; j < sze * 4 - 2; j++)
        {
            cout << board[i][j];
        }
        cout << '\n';
    }

    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < MX; i++)
    {
        fill(board[i], board[i] + MX, ' ');
    }

    solv(n, 0, 0);
    print_ans(n);

    return 0;
}