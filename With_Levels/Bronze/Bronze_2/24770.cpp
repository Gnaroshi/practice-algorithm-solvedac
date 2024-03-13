// problem: Carousel Rides
// id: 24770
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (true)
    {
        cin >> n >> m;
        if (!n && !m)
            break;
        double a, b, aa = -1, ab = -1, ans = 1000000.0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a <= m)
            {
                if (b / a < ans)
                {
                    aa = a;
                    ab = b;
                    ans = b / a;
                }
                else if (b / a - ans < 0.00000001)
                {
                    if (a > aa)
                    {
                        aa = a;
                        ab = b;
                    }
                }
            }
        }
        if (aa == ab && aa == -1)
            cout << "No suitable tickets offered\n";
        else
            cout << "Buy " << int(aa) << " tickets for $" << int(ab) << "\n";
    }

    return 0;
}