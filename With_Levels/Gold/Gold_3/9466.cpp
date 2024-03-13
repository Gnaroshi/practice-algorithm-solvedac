// problem: 텀 프로젝트
// id: 9466
// time taken:
#include <bits/stdc++.h>
using namespace std;

int tc, n, ans;

int board[100005];
int vist[100005];
int temp[100005];

void dfs(int c)
{
    int nxt = board[c];
    vist[c] = 1;

    if (vist[nxt] == 0)
        dfs(nxt);
    else if (temp[nxt] == 0)
    {
        for (int i = nxt; i != c; i = board[i])
            ans++;
        ans++;
    }
    temp[c] = 1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> tc;
    while (tc--)
    {
        ans = 0;
        cin >> n;
        fill(board, board + n + 1, 0);
        fill(vist, vist + n + 1, 0);
        fill(temp, temp + n + 1, 0);

        for (int i = 1; i <= n; i++)
            cin >> board[i];

        for (int i = 1; i <= n; i++)
        {
            if (vist[i] == 0)
            {
                dfs(i);
            }
        }
        cout << n - ans << '\n';
    }

    return 0;
}