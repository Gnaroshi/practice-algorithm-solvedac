// problem: Vestigium
// id: 27797
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int n, r = 0, c = 0, k = 0, t;
        cin >> n;
        int **mt = (int **)malloc(sizeof(int *) * n);
        for (int i = 0; i < n; i++)
            mt[i] = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> t;
                mt[i][j] = t;
                if (i == j)
                    k += t;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int *cnt = (int *)malloc(sizeof(int) * n + 1);
            fill(cnt, cnt + n + 1, 0);
            for (int j = 0; j < n; j++)
                cnt[mt[i][j]]++;
            for (int j = 1; j <= n; j++)
            {
                if (cnt[j] > 1)
                {
                    r++;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int *cnt = (int *)malloc(sizeof(int) * n + 1);
            fill(cnt, cnt + n + 1, 0);
            for (int j = 0; j < n; j++)
                cnt[mt[j][i]]++;
            for (int j = 1; j <= n; j++)
            {
                if (cnt[j] > 1)
                {
                    c++;
                    break;
                }
            }
        }
        cout << "Case #" << tcc << ": " << k << ' ' << r << ' ' << c << '\n';
    }

    return 0;
}