#include <bits/stdc++.h>
using namespace std;

#define MX 10001

char board[MX][MX];

void solv(int sze, int row, int col)
{
    if (sze == 0)
    {
        board[row][col] = '*';
        return;
    }

    int temp = sze * 4 - 3;
    for (int i = row; i < row + temp + 1; i++)
        board[row][i] = '*';

    for (int i = col; i < col + temp + 2; i++)
        board[i][col] = '*';

    for (int i = row; i < row + temp; i++)
    {
        board[row + temp + 1][i] = '*';
    }

    for (int i = col + 2; i < col + temp + 1; i++)
    {
        board[i][col + temp - 1] = '*';
    }

    solv(sze - 1, row + 2, col + 2);
}

void print_ans(int sze)
{
    int temp = sze * 4 - 3;
    for (int i = 0; i < temp + 2; i++)
    {
        if (i == 1)
        {
            cout << "*\n";
            continue;
        }
        for (int j = 0; j < temp; j++)
        {
            cout << board[i][j];
        }
        cout << '\n';
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << '*';
        return 0;
    }
    for (int i = 0; i < MX; i++)
    {
        fill(board[i], board[i] + MX, ' ');
    }

    solv(n, 0, 0);
    print_ans(n);

    return 0;
}