// problem: ROOMS
// id: 3282
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, g, rs = 0;
    cin >> n >> g;
    bool chk = true;
    vector<int> v(n, 0);
    for (int i = 0; i < g; i++)
    {
        int t;
        cin >> t;
        while (t)
        {
            if (v[rs] < 2)
            {
                v[rs]++;
                t--;
                if (v[rs] == 2)
                    rs++;
            }
            else
                rs++;
            rs %= n;
        }
        bool tchk = true;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 0)
            {
                rs = j;
                tchk = false;
                break;
            }
        }
        if (tchk)
            chk = false;
        if (!chk)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j] != 2)
                {
                    rs = j;
                    break;
                }
            }
        }
    }
    for (auto i : v)
        cout << i << '\n';

    return 0;
}