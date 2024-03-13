// problem: 임시 반장 정하기
// id: 1268
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 0, ans = 0;
    cin >> n;
    int **st = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        st[i] = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> st[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        int t = 0, c;
        bool *chk = (bool *)malloc(sizeof(bool) * n);
        fill(chk, chk + n, 0);
        for (int j = 0; j < 5; j++)
        {
            c = st[i][j];
            for (int k = 0; k < n; k++)
            {
                if (c == st[k][j] && !chk[k])
                {
                    t++;
                    chk[k] = 1;
                }
            }
        }
        if (t > mx)
        {
            mx = t;
            ans = i;
        }
    }
    cout << ans + 1;

    return 0;
}