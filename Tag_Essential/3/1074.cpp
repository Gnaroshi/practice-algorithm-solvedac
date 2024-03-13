#include <bits/stdc++.h>
using namespace std;

int n, r, c;
int cnt;

void sol(int sze, int row, int col)
{
    if (sze == 1)
    {
        if (row == r && col == c)
        {
            cout << cnt << '\n';
            return;
        }
        cnt++;
        return;
    }

    int nxt = sze / 2;

    if (r < row + sze && r >= row && c < col + sze && c >= col)
    {
        sol(nxt, row, col);
        sol(nxt, row, col + nxt);
        sol(nxt, row + nxt, col);
        sol(nxt, row + nxt, col + nxt);
    }
    else
        cnt += sze * sze;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> r >> c;
    cnt = 0;
    int range = pow(2, n);
    sol(range, 0, 0);

    return 0;
}