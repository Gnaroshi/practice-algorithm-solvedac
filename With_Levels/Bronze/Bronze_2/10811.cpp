// problem: 바구니 뒤집기
// id: 10811
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
    for (int i = 0; i <= n; i++)
        bas[i] = i;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j < (a + b) / 2 + 1; j++)
        {
            int temp = bas[j];
            bas[j] = bas[b - j + a];
            bas[b - j + a] = temp;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << bas[i] << ' ';
    return 0;
}