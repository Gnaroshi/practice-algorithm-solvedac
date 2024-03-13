// problem: Prerequisites?
// id: 4285
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, m, r, c, cnt;
    while (true)
    {
        cin >> k;
        if (!k)
            break;
        cin >> m;
        string t;
        vector<string> v(k);
        for (auto &i : v)
            cin >> i;
        bool chk = true;
        for (int i = 0; i < m; i++)
        {
            cin >> r >> c;
            cnt = 0;
            for (int j = 0; j < r; j++)
            {
                cin >> t;
                if (chk)
                {
                    for (auto s : v)
                    {
                        if (s == t)
                        {
                            cnt++;
                            break;
                        }
                    }
                }
            }
            if (cnt < c)
                chk = false;
        }
        cout << (chk ? "yes" : "no") << '\n';
    }

    return 0;
}