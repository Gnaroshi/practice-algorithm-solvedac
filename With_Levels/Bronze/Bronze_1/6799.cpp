// problem: Computer Purchase
// id: 6799
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v(n);
    vector<int> r(n), s(n), d(n), t(n);
    iota(t.begin(), t.end(), 0);
    for (int i = 0; i < n; i++)
        cin >> v[i] >> r[i] >> s[i] >> d[i];
    if (!n)
        return 0;
    if (n == 1)
    {
        cout << v[0] << '\n';
        return 0;
    }
    sort(t.begin(), t.end(), [&](int i, int j)
         { 
            if(r[i] * 2 + 3 * s[i] + d[i] == r[j] * 2 + 3 * s[j] + d[j])return v[i] < v[j];
            return (r[i] * 2 + 3 * s[i] + d[i] > r[j] * 2 + 3 * s[j] + d[j]); });
    cout << v[t[0]] << '\n'
         << v[t[1]] << '\n';
    return 0;
}