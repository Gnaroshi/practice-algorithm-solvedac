#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int board[105];
    fill(board, board + 105, 1);
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        for (int i = x; i < y; i++)
        {
            board[i] = 0;
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += board[i];
    }
    cout << ans << '\n';

    return 0;
}