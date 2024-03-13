// problem: Farm
// id: 16283
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n, w, x, y;
    cin >> a >> b >> n >> w;
    int cnt = 0;
    for (int i = 1; i < 1000001; i++)
    {
        if (i * a > w || i > n)
            break;
        for (int j = 1; j < 1000001; j++)
        {
            if (i * a + j * b == w && i + j == n)
            {
                x = i, y = j;
                cnt++;
            }
            if (cnt > 1)
            {
                cout << -1;
                return 0;
            }
            if (i + j > n || i * a + j * b > w)
                break;
        }
    }
    if (cnt)
        cout << x << ' ' << y;
    else
        cout << -1;

    return 0;
}