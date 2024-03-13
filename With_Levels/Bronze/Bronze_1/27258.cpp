// problem: Дроби
// id: 27258
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    double ax = double(a.first);
    double ay = double(a.second);
    double bx = double(b.first);
    double by = double(b.second);
    return ((ax / ay) < (bx / by));
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, q, g;
    cin >> n >> p >> q;
    // n-1 / n
    double dp = double(p), dq = double(q);
    double di, dj;
    dp = 1.0 / dp, dq = 1.0 / dq;

    set<pair<int, int>> s;
    for (int i = 1; i < n; i++)
    {
        di = double(i);
        for (int j = 1; j <= n; j++)
        {
            dj = double(j);
            if (dp + 0.00000001 < (di / dj) && (di / dj) < dq - 0.00000001)
            {
                g = __gcd(i, j);
                s.insert({i / g, j / g});
            }
        }
    }
    vector<pair<int, int>> v;
    for (auto i : s)
        v.push_back(i);
    sort(v.begin(), v.end(), cmp);
    for (auto i : v)
        cout << i.first << '/' << i.second << '\n';

    return 0;
}