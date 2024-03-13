// problem: Entrance Examination
// id: 11038
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, nn, nx;
    while (true)
    {
        cin >> m >> nn >> nx;
        if (m + nn + nx == 0)
            break;
        vector<int> p(m);
        for (auto &i : p)
            cin >> i;
        sort(p.begin(), p.end(), greater<>());
        int mx = -1, l = 0, t;
        for (int i = nn; i <= nx; i++)
        {
            t = p[i - 1] - p[i];
            if (t >= mx)
                l = i, mx = t;
        }
        cout << l << '\n';
    }

    return 0;
}