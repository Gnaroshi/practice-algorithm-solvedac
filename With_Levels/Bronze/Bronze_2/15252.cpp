// problem: Opening Ceremony
// id: 15252
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int c, n, t, mx = 0;
        cin >> c >> n;
        vector<int> v(c);
        for (auto &i : v)
            cin >> i;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v[t - 1]--;
        }
        for (auto i : v)
            mx = max(mx, i);
        cout << mx << '\n';
        if (tcc != tc)
            cout << '\n';
    }

    return 0;
}