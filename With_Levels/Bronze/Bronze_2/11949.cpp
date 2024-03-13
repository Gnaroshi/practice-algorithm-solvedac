// problem: 번호표 교환
// id: 11949
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    cin >> n >> m;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        v.emplace_back(t);
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] % i > v[j + 1] % i)
                swap(v[j], v[j + 1]);
        }
    }
    for (auto i : v)
        cout << i << '\n';

    return 0;
}