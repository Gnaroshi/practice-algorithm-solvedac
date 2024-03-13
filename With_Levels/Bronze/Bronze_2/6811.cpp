// problem: Old Fishin’ Hole
// id: 6811
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, n, cnt = 0;
    cin >> a >> b >> c >> n;
    for (int i = 0;; i++)
    {
        if (i * a > n)
            break;
        for (int j = 0;; j++)
        {
            if (i * a + j * b > n)
                break;
            for (int k = 0;; k++)
            {
                if (i + j + k == 0)
                    continue;
                if (i * a + j * b + k * c > n)
                    break;
                if (i * a + j * b + k * c <= n)
                {
                    cout << i << " Brown Trout, " << j << " Northern Pike, " << k << " Yellow Pickerel\n";
                    cnt++;
                }
            }
        }
    }
    cout << "Number of ways to catch fish: " << cnt;

    return 0;
}