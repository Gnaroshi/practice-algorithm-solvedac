#include <bits/stdc++.h>
using namespace std;

int board[11][11];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < col; j++)
        {
            board[i][j] = temp[j] - '0';
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            cout << board[i][j];
        }
        cout << '\n';
    }

    return 0;
}