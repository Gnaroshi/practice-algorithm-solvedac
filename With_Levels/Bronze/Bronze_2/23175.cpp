// problem: Histogram Sequence 3
// id: 23175
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, bef, t, cnt;
    vector<int> ans;
    cin >> n;
    cin >> cnt;
    ans.emplace_back(cnt);
    for (int i = 1; i < n; i++)
    {
        cnt--;
        cin >> t;
        if (cnt == 0)
        {
            ans.emplace_back(t);
            cnt = t;
        }
    }
    for (auto i : ans)
        cout << i << ' ';

    return 0;
}