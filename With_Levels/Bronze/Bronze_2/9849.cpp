// problem: Rect
// id: 9849
// time taken:
#include <bits/stdc++.h>
using namespace std;

int chk[10001][10001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x1, x2, y1, y2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> x2 >> y1 >> y2;
        for (int x = x1; x < x2; x++)
        {
            for (int y = y1; y < y2; y++)
                chk[x][y]++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 10001; i++)
    {
        for (int j = 0; j < 10001; j++)
            if (chk[i][j] == n)
                cnt++;
    }
    cout << cnt;

    return 0;
}