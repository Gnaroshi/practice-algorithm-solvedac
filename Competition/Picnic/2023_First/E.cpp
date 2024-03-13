// problem: E번 - 닭강정의 전설
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int brd[5001][5001];
int sm[5001][5001];
int n, k, q, r1, c1, r2, c2, a, b;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> brd[i + 1][j + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            sm[i][j] = sm[i - 1][j] + sm[i][j - 1] - sm[i - 1][j - 1] + brd[i][j];
    cin >> q;
    while (q--)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        a = sm[r2][c2] - sm[r2][c1 - 1] - sm[r1 - 1][c2] + sm[r1 - 1][c1 - 1];
        b = sm[r2 - 1][c2 - 1] - sm[r2 - 1][c1] - sm[r1][c2 - 1] + sm[r1][c1];
        cout << b * 2 - a << '\n';
    }

    return 0;
}