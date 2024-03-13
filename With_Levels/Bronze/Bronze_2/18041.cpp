// problem: Mountain Ranges
// id: 18041
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, c = 0, cnt = 0, t;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> m(n);
    for (auto &i : v)
        cin >> i;
    m[0] = v[0];
    for (int i = 1; i < n; i++)
        m[i] = v[i] - v[i - 1];
    for (auto i : m)
    {
        if (i <= k)
        {
            c++;
        }
        else
        {
            cnt = max(cnt, c);
            c = 0;
        }
    }
    cnt = max(cnt, c);
    cout << min(cnt + 1, n);

    return 0;
}