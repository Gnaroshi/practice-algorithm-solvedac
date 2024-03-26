// problem: 용액
// id: 2467
// tag: two pointer
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, e, mn = INT32_MAX, ts, te, ase, anss, anse;
    cin >> n;

    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    s = 0, e = n - 1;
    while (s < e)
    {
        ase = v[s] + v[e];
        if (abs(ase) < mn)
        {
            mn = abs(ase);
            anss = v[s], anse = v[e];
        }
        if (ase < 0)
            s++;
        else
            e--;
    }
    cout << anss << ' ' << anse << '\n';
    return 0;
}