// problem: Taro's Shopping
// id: 14969
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
        if (n + m == 0)
            break;
        int mx = -1, t;
        int *v = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v, v + n, greater<>());
        bool cntu = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > m)
                continue;
            if (cntu)
                break;
            for (int j = i + 1; j < n; j++)
            {
                int ts = v[i] + v[j];
                if (ts < mx)
                {
                    cntu = false;
                    break;
                }
                if (ts > mx && ts <= m)
                {
                    mx = ts;
                }
            }
        }
        if (mx == -1)
            cout << "NONE\n";
        else
            cout << mx << '\n';
    }

    return 0;
}