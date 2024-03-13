#include <bits/stdc++.h>
using namespace std;

#define MX 65

int n;
int board[MX][MX];

void qdtr(int sze, int row, int col)
{
    // cout << '(';
    if (sze == 1)
    {
        cout << board[row][col];
        return;
    }

    bool isEqual = true;
    int temp = board[row][col];
    for (int i = row; i < sze + row; i++)
    {
        for (int j = col; j < sze + col; j++)
        {
            if (board[i][j] != temp)
            {
                isEqual = false;
                break;
            }
        }
        if (!isEqual)
            break;
    }

    if (!isEqual)
    {
        int sze_h = sze / 2;
        cout << '(';
        qdtr(sze_h, row, col);
        qdtr(sze_h, row, col + sze_h);
        qdtr(sze_h, row + sze_h, col);
        qdtr(sze_h, row + sze_h, col + sze_h);
        cout << ')';
    }
    else
    {
        cout << temp;
    }
    return;
    // cout << ')';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        for (int j = 0; j < n; j++)
        {
            board[i][j] = temp[j] - '0';
        }
    }

    qdtr(n, 0, 0);

    return 0;
}