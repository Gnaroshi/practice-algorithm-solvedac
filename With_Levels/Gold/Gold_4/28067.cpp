// problem: 기하가 너무 좋아
// id: 28067
// time taken:
#include <bits/stdc++.h>
using namespace std;

double gd(pair<double, double> a, pair<double, double> b)
{
    return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    set<tuple<double, double, double>> tr;
    vector<pair<double, double>> v;
    vector<double> vt(3, 0);
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            v.push_back({i, j});
    for (auto a : v)
    {
        for (auto b : v)
        {
            if (a == b)
                continue;
            for (auto c : v)
            {
                if (a == c || b == c)
                    continue;
                bool chk = false;
                if (a.first != b.first && a.first != c.first)
                {
                    if ((a.second - b.second) * (a.first - c.first) != (a.second - c.second) * (a.first - b.first))
                        chk = true;
                }
                else if (b.first != a.first && b.first != c.first)
                {
                    if ((b.second - a.second) * (b.first - c.first) != (b.second - c.second) * (b.first - a.first))
                        chk = true;
                }
                else if (c.first != b.first && c.first != a.first)
                {
                    if ((c.second - b.second) * (c.first - a.first) != (c.second - a.second) * (c.first - b.first))
                        chk = true;
                }
                if (chk)
                {
                    vt[0] = gd(a, b);
                    vt[1] = gd(b, c);
                    vt[2] = gd(c, a);
                    sort(vt.begin(), vt.end());
                    tr.insert({vt[0], vt[1], vt[2]});
                }
            }
        }
    }
    cout << tr.size();

    return 0;
}