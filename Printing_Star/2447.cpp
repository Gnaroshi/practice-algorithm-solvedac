#include <bits/stdc++.h>
using namespace std;

// int n;

#define MX 2188
int board[MX][MX];

void solv(int sze, int row, int col)
{
    // cout << "sze: " << sze << " row: " << row << " col: " << col << '\n';
    if (sze == 1)
    {
        board[row][col] = 1;
        return;
    }

    int nxt = sze / 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
                continue;
            else
                solv(nxt, i * nxt + row, j * nxt + col);
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
    solv(n, 0, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 1)
                cout << '*';
            else
                cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}