// problem: 共通要素 (Common Elements)
// id: 20978
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    cin >> n >> m;
    vector<int> v(n), ans;
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        if (find(v.begin(), v.end(), t) != v.end())
        {
            if (find(ans.begin(), ans.end(), t) == ans.end())
                ans.emplace_back(t);
        }
    }
    sort(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << '\n';

    return 0;
}