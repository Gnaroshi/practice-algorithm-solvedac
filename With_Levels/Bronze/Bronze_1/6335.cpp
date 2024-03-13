// problem: Date bugs
// id: 6335
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcc = 1, n, ty, ta, tb, mx;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        cout << "Case #" << tcc++ << ":\n";
        vector<int> y, a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> ty >> ta >> tb;
            y.push_back(ty);
            a.push_back(ta);
            b.push_back(tb);
        }
        mx = *max_element(a.begin(), a.end());

        bool chk = false;
        while (true)
        {
            if (mx >= 10000)
                break;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                cnt += ((mx - a[i]) % (b[i] - a[i]) + a[i] == y[i]);
            }
            if (cnt == n)
            {
                chk = true;
                cout << "The actual year is " << mx << ".\n\n";
                break;
            }
            mx++;
        }
        if (!chk)
            cout << "Unknown bugs detected.\n\n";
    }

    return 0;
}