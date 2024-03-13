// problem: Manipulacja rankingu
// id: 8720
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t, cnt = 0;
    cin >> n >> m;
    vector<vector<int>> v(n);
    vector<int> dl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            v[i].push_back(t);
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (v[0][i] == 100)
            dl.push_back(i);
    }
    cout << 1 << ' ';
    for (auto i : v)
    {
        bool chk = true;
        for (auto j : dl)
        {
            if (i[j] != 100)
            {
                chk = false;
                break;
            }
        }
        cnt += chk;
    }
    cout << cnt;

    return 0;
}