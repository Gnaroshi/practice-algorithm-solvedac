#include <bits/stdc++.h>
using namespace std;

#define MX 2188

int n;
int board[MX][MX];
int cnts[3];

void slv(int size, int x, int y)
{
    int itr = board[x][y];
    if (size == 1)
    {
        cnts[itr]++;
        return;
    }

    bool isSame = true;
    for (int i = x; i < x + size; i++)
    {
        for (int j = y; j < y + size; j++)
        {
            if (board[i][j] != itr)
            {
                isSame = false;
                break;
            }
        }
        if (!isSame)
            break;
    }
    if (isSame)
    {
        cnts[itr]++;
        return;
    }
    if (!isSame)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                slv(size / 3, size / 3 * i + x, size / 3 * j + y);
            }
        }
    }

    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            board[i][j] = temp + 1;
        }
    }
    fill(cnts, cnts + 3, 0);

    slv(n, 0, 0);

    for (int i = 0; i < 3; i++)
    {
        cout << cnts[i] << '\n';
    }
    return 0;
}