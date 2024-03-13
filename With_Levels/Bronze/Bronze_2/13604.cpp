// problem: Jogo de Estratégia
// id: 13604
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, t;
    cin >> n >> r;
    int *ws = (int *)malloc(sizeof(int) * n);
    fill(ws, ws + n, 0);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            ws[j] += t;
        }
    }
    int mx = -1, loc = 0;
    for (int i = 0; i < n; i++)
    {
        if (ws[i] >= mx)
        {
            mx = ws[i];
            loc = i;
        }
    }
    cout << loc + 1;

    return 0;
}