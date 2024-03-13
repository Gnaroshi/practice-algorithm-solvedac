// problem: A Rank Problem
// id: 21156
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b, al, bl, t;
    string sa, sb;
    cin >> n >> m;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    while (m--)
    {
        cin >> sa >> sb;
        a = stoi(sa.substr(1));
        b = stoi(sb.substr(1));
        al = find(v.begin(), v.end(), a) - v.begin();
        bl = find(v.begin(), v.end(), b) - v.begin();
        if (al > bl)
        {
            t = v[bl];
            for (int i = bl + 1; i <= al; i++)
                v[i - 1] = v[i];
            v[al] = t;
        }
    }
    for (int i = 0; i < n; i++)
        cout << 'T' << v[i] << (i != n - 1 ? ' ' : '\n');

    return 0;
}