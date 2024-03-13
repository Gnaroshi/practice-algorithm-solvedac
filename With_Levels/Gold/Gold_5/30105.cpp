// problem: 아즈버의 이빨 자국
// id: 30105
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    vector<int> th(n), ans;
    set<int> s, v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        th[i] = t;
        v.insert(t);
    }

    for (int i = 1; i < n; i++)
        s.insert(th[i] - th[0]);

    bool chk;
    for (auto i : s)
    {
        chk = true;
        for (int j = 0; j < n; j++)
        {
            if (v.find(th[j] - i) != v.end() || v.find(th[j] + i) != v.end())
                continue;
            chk = false;
            break;
        }
        if (chk)
            ans.push_back(i);
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    if (!ans.empty())
    {
        for (auto i : ans)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}