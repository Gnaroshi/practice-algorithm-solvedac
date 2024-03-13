#include <bits/stdc++.h>
using namespace std;

#define ROW_NUM 6
#define COL_NUM 12

char board[COL_NUM][ROW_NUM];
int vist[COL_NUM][ROW_NUM];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < COL_NUM; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < ROW_NUM; j++)
        {
            board[i][j] = temp[j];
        }
    }

    return 0;
}