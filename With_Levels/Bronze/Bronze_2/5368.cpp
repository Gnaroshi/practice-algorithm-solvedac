// problem: Escape Route
// id: 5368
// time taken:
#include <bits/stdc++.h>
using namespace std;

double sx, sy, lx, ly, dist;
double gd(double a, double b)
{
    return sqrt(abs((sx - a) * (sx - a) + (sy - b) * (sy - b)));
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(2);
    while (tc--)
    {
        int n;
        double mn = 0x3f3f3f3f;
        char c;
        cin >> n;
        vector<pair<double, double>> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> c;
                if (c == 's')
                {
                    sx = i;
                    sy = j;
                }
                if (c == 'p')
                    v.push_back({i, j});
            }
        }
        for (auto i : v)
        {
            dist = gd(i.first, i.second);
            if (dist < mn)
            {
                lx = i.first;
                ly = i.second;
                mn = dist;
            }
        }
        cout << "(" << int(sx) << "," << int(sy) << "):(" << int(lx) << "," << int(ly) << "):" << mn << '\n';
    }

    return 0;
}