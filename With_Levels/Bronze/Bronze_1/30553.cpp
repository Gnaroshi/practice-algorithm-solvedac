// problem: Guess Who
// id: 30553
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q, p;
    char c;
    cin >> n >> m >> q;
    vector<string> v(n);
    string t = "";
    for (int i = 0; i < m; i++)
        t += ' ';

    for (auto &i : v)
        cin >> i;

    for (int i = 0; i < q; i++)
    {
        cin >> p >> c;
        t[p - 1] = c;
    }
    int cnt = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        bool chk = true;
        for (int j = 0; j < m; j++)
        {
            if (t[j] == ' ')
                continue;
            if (t[j] != v[i][j])
            {
                chk = false;
                break;
            }
        }
        if (chk)
        {
            cnt++;
            pos = i;
        }
    }
    if (cnt == 1)
        cout << "unique" << '\n'
             << pos + 1;
    else
        cout << "ambiguous" << '\n'
             << cnt;

    return 0;
}