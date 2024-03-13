// problem: Pizza
// id: 20660
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, t, cnt = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    cin >> m;
    while (m--)
    {
        cin >> k;
        bool chk = true;
        while (k--)
        {
            cin >> t;
            if (chk)
            {
                for (auto i : a)
                {
                    if (i == t)
                    {
                        chk = false;
                        break;
                    }
                }
            }
        }
        cnt += chk;
    }
    cout << cnt;

    return 0;
}