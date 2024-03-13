// problem: 기숙사 바닥
// id: 2858
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int RNG = 5000;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b, tb;
    cin >> r >> b;

    for (int i = 3; i <= RNG; i++)
    {
        for (int j = 3; j <= RNG; j++)
        {
            tb = (i + j) * 2 - 4;
            if (tb > r)
                break;
            if (tb == r)
            {
                if ((i - 2) * (j - 2) == b)
                {
                    cout << max(i, j) << ' ' << min(i, j);
                    return 0;
                }
            }
        }
    }

    return 0;
}