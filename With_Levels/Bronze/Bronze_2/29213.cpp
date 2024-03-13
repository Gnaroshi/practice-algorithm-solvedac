// problem: Колевская бухгалтерия
// id: 29213
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, ans = 0;
    cin >> a >> b >> c;

    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (a + j > b + i - j)
                ans++;
        }
    }
    cout << ans;

    return 0;
}