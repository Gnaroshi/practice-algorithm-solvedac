// problem: Hay Expenses
// id: 6081
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, t, a, b;
    cin >> n >> q;
    vector<int> v;
    v.emplace_back(0);
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        v.emplace_back(v[i - 1] + t);
    }
    while (q--)
    {
        cin >> a >> b;
        cout << v[b] - v[a - 1] << '\n';
    }

    return 0;
}