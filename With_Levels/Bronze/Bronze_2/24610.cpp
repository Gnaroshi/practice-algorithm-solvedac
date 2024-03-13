// problem: Who Goes There?
// id: 24610
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, c = 0, e = 0;
    cin >> n >> m;
    vector<int> v(m), cnt(m, 0);
    for (auto &i : v)
        cin >> i;
    while (n != 0)
    {
        if (v[c] > 0)
        {
            cnt[c]++, v[c]--;
            n--;
        }
        else if (v[c] == 0)
        {
            e++;
            v[c] = -1;
        }
        if (e == m)
            break;
        c = (c + 1) % m;
    }
    for (auto i : cnt)
        cout << i << '\n';

    return 0;
}