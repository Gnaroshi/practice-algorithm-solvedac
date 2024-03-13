#include <bits/stdc++.h>
using namespace std;

int h, w;
int b1[15][15];
int b2[15][15];
int c[15][15];
int ans[15][15];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> h >> w;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            cin >> b1[i][j];
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            cin >> b2[i][j];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int dif = b1[i][j] - b2[i][j];
            c[i][j] = dif * dif;
        }
    }

    for (int i = 1; i <= h; i++)
        fill(ans[i], ans[i] + w, 0x7f7f7f7f);

    for (int i = 1; i <= h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int temp_min = 0x7f7f7f7f;
            for (int x : {j - 1, j, j + 1})
            {
                if (x < 0 || x >= w)
                    continue;
                else
                    temp_min = min(temp_min, ans[i - 1][x]);
            }
            ans[i][j] = temp_min + c[i - 1][j];
        }
    }
    int ans_min = 0x7f7f7f7f;
    for (int i = 0; i < w; i++)
        ans_min = min(ans_min, ans[h][i]);
    cout << ans_min << '\n';
    return 0;
}