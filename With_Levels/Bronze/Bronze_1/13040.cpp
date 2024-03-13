// problem: Important Test
// id: 13040
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t, t0;
    cin >> n >> t >> t0;
    while (n--)
    {
        cin >> m;
        vector<int> v(m);
        for (auto &i : v)
            cin >> i;
        int ts = 0, l = 0, mxl, ans = 0, tmp, tcnt;
        while (true)
        {
            if (l >= m || ts >= t)
                break;
            ts += v[l];
            l++;
        }

        for (int i = 0; i < l; i++)
        {
            tmp = v[i];
            v[i] = t0;
            ts = 0;
            bool fnd = true;
            for (int j = 0; j < m;)
            {
                ts += v[j];
                j++;
                if (ts == t)
                {
                    tcnt = j;
                    fnd = false;
                    break;
                }
                else if (ts > t)
                {
                    tcnt = j - 1;
                    fnd = false;
                    break;
                }
            }
            if (fnd)
                tcnt = m;
            ans = max(ans, tcnt);
            v[i] = tmp;
        }
        cout << ans << '\n';
    }

    return 0;
}