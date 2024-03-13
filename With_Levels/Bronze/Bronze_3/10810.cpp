// problem: 공 넣기
// id: 10810
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int *bas = (int *)malloc(sizeof(int) * (n + 1));
    fill(bas, bas + n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int j = a; j <= b; j++)
        {
            bas[j] = c;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << bas[i] << ' ';

    return 0;
}