// problem: Реклама на заборе
// id: 19796
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    int *f = (int *)malloc(sizeof(int) * m + 1);
    fill(f, f + m + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
            f[j] = 1;
    }
    for (int i = 1; i <= m; i++)
    {
        if (!f[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}