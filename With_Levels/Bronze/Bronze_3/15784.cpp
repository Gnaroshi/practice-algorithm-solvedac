// problem: 질투진서
// id: 15784
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, t;
    cin >> n >> a >> b;
    int **le = (int **)malloc(sizeof(int *) * n + 1);
    for (int i = 0; i <= n; i++)
        le[i] = (int *)malloc(sizeof(int) * n + 1);

    bool chk = false;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> le[i][j];
    t = le[a][b];

    for (int i = 1; i <= n; i++)
    {
        if (le[a][i] > t)
        {
            chk = true;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (le[i][b] > t)
        {
            chk = true;
            break;
        }
    }
    if (chk)
        cout << "ANGRY";
    else
        cout << "HAPPY";

    return 0;
}
