// problem: Greedily Increasing Subsequence
// id: 17931
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cur;
    cin >> n;
    vector<int> v(n), ans;
    for (auto &i : v)
        cin >> i;
    cur = v.front();
    ans.push_back(cur);
    for (int i = 1; i < n; i++)
    {
        if (v[i] > cur)
        {
            ans.push_back(v[i]);
            cur = v[i];
        }
    }
    cout << ans.size() << '\n';
    for (auto i : ans)
        cout << i << ' ';

    return 0;
}