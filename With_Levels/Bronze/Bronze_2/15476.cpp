// problem: 幹線道路 (Trunk Road)
// id: 15476
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, mn = 0x3f3f3f3f;
    cin >> h >> w;
    int **brd = (int **)malloc(sizeof(int *) * h);
    for (int i = 0; i < h; i++)
        brd[i] = (int *)malloc(sizeof(int) * w);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cin >> brd[i][j];
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int t = 0;
            for (int ii = 0; ii < h; ii++)
            {
                if (i == ii)
                    continue;
                for (int jj = 0; jj < w; jj++)
                {
                    if (j == jj)
                        continue;
                    t += min(abs(i - ii), abs(j - jj)) * brd[ii][jj];
                }
            }
            mn = min(mn, t);
        }
    }
    cout << mn;

    return 0;
}