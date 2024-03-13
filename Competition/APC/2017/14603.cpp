#include <bits/stdc++.h>
using namespace std;

int m, n, k, w;
int board[305][305];
int ans[305][305];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> m >> n >> k >> w;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    int mid = (w * w) / 2 + 1;
    int mm = m - w + 1;
    int nn = n - w + 1;
    for (int i = 0; i < mm; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            vector<int> v;
            for (int ii = i; ii < i + w; ii++)
            {
                for (int jj = j; jj < j + w; jj++)
                {
                    v.push_back(board[ii][jj]);
                }
            }
            sort(v.begin(), v.end());
            ans[i][j] = v[mid - 1];
        }
    }

    for (int i = 0; i < mm; i++)
    {
        for (int j = 0; j < nn; j++)
            cout << ans[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}