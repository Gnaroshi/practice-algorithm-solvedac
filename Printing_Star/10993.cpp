#include <bits/stdc++.h>
using namespace std;

char board[2050][2050];

void solv(int sze, int row, int col, int num)
{
    if (num == 1)
    {
        board[row][col] = '*';
        return;
    }

    int nxt = (sze - 1) / 2 - 1;
    int temp = sze / 2 + 1;
    if (num % 2 == 0)
    {
        for (int i = 0; i < temp; i++)
        {
            board[row + temp - i - 1][col - i] = '*';
            board[row + temp - i - 1][col + i] = '*';
        }
        for (int i = col - temp + 1; i < col + temp + 1; i++)
        {
            board[row][i] = '*';
        }
        solv(nxt, row + 1, col, num - 1);
    }
    else
    {
        for (int i = 0; i < temp; i++)
        {
            board[row + i][col - i] = '*';
            board[row + i][col + i] = '*';
        }
        for (int i = col - temp + 1; i < col + temp + 1; i++)
        {
            board[row + temp - 1][i] = '*';
        }
        solv(nxt, row + temp / 2, col, num - 1);
    }
}

void print_ans(int sze, int num)
{
    int sze2 = sze / 2 + 1;
    if (num % 2 == 0)
    {
        for (int i = 0; i < sze2; i++)
        {
            for (int j = 0; j < sze - i; j++)
            {
                cout << board[i][j];
            }
            cout << '\n';
        }
    }
    else
    {
        for (int i = 0; i < sze2; i++)
        {
            for (int j = 0; j < sze - sze2 + i + 1; j++)
            {
                cout << board[i][j];
            }
            cout << '\n';
        }
    }
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < 2050; i++)
    {
        fill(board[i], board[i] + 2050, ' ');
    }

    int s = 1;
    for (int i = 1; i < n; i++)
    {
        s = (s + 1) * 2 + 1;
    }

    // cout << "s: " << s << " center: " << s / 2 + 1 << '\n';
    solv(s, 0, s / 2, n);
    print_ans(s, n);

    return 0;
}