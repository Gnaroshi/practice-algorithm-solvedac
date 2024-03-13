// problem: 색종이
// id: 2563
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int **board = (int **)malloc(sizeof(int *) * 101);
    for (int i = 0; i < 101; i++)
        board[i] = (int *)malloc(sizeof(int) * 101);
    for (int i = 0; i < 101; i++)
        fill(board[i], board[i] + 101, 0);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j < a + 10; j++)
        {
            for (int k = b; k < b + 10; k++)
            {
                board[j][k]++;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i < 101; i++)
    {
        for (int j = 1; j < 101; j++)
        {
            if (board[i][j] == 0)
            {
                ans++;
            }
        }
    }
    cout << 100 * 100 - ans;

    return 0;
}