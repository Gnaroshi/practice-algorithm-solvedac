// problem: Blocks
// id: 4349
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, mn = 0x3f3f3f3f;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                if (i * j > n)
                    break;
                int iter = (n + 1) / (i * j);
                for (int k = 1; k <= iter; k++)
                {
                    if (i * j * k == n)
                    {
                        mn = min(2 * (i * j + j * k + k * i), mn);
                    }
                }
            }
        }
        cout << mn << '\n';
    }

    return 0;
}