// problem: 바구니 순서 바꾸기
// id: 10812
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int *bas = (int *)malloc(sizeof(int) * n + 1);

    for (int i = 0; i <= n; i++)
        bas[i] = i;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int *t = (int *)malloc(sizeof(int) * b - a + 1);

        for (int j = c; j <= b; j++)
        {
            t[j - c] = bas[j];
        }
        for (int j = a; j < c; j++)
        {
            t[b - c + 1 + j - a] = bas[j];
        }
        for (int j = a; j <= b; j++)
        {
            bas[j] = t[j - a];
        }
    }
    for (int i = 1; i <= n; i++)
        cout << bas[i] << ' ';

    return 0;
}