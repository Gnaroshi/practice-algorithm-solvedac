// problem: New Year and Naming
// id: 18884
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q, y;
    cin >> n >> m;
    vector<string> s(n), t(m);
    for (auto &i : s)
        cin >> i;
    for (auto &i : t)
        cin >> i;
    cin >> q;
    while (q--)
    {
        cin >> y;
        y--;
        y %= (n * m);
        cout << s[y % n] << t[y % m] << '\n';
    }

    return 0;
}