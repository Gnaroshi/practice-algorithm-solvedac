// problem: Darts
// id: 3412
// time taken:
#include <bits/stdc++.h>
using namespace std;

double rd[] = {20 * 20, 40 * 40, 60 * 60, 80 * 80, 100 * 100, 120 * 120, 140 * 140, 160 * 160, 180 * 180, 200 * 200, 1000000};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, ret = 0, l;
        double x, y, r;
        cin >> n;
        while (n--)
        {
            cin >> x >> y;
            r = x * x + y * y;
            for (int i = 0; i < 11; i++)
            {
                if (r <= rd[i])
                {
                    l = i + 1;
                    break;
                }
            }
            ret += 11 - l;
        }
        cout << ret << '\n';
    }

    return 0;
}