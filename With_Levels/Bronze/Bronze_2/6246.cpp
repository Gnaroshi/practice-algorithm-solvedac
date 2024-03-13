// problem: 풍선 놀이
// id: 6246
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    int *sl = (int *)malloc(sizeof(int) * n + 1);
    fill(sl, sl + n + 1, 1);
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= n; j += b)
            sl[j] = 0;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += sl[i];
    cout << cnt;

    return 0;
}