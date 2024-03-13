// problem: Restaurant Opening
// id: 27588
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, mn = 0x3f3f3f3f;
    cin >> n >> m;
    int **brd = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        brd[i] = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> brd[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int t = 0;
            for (int ii = 0; ii < n; ii++)
                for (int jj = 0; jj < m; jj++)
                    t += (abs(ii - i) + abs(jj - j)) * brd[ii][jj];
            mn = min(t, mn);
        }
    }
    cout << mn;

    return 0;
}