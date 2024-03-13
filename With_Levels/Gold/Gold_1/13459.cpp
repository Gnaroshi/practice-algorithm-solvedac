// problem: 구슬 탈출
// id: 13459
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, m;
char board[11][11];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
            board[i][j] = s[j];
    }

    return 0;
}