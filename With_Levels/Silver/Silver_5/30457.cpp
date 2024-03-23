// problem: 단체줄넘기
// id: 30457
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, t, bef;
    cin >> n;
    vector<int> v(n), f, b;
    for (auto &i : v)
        cin >> i;

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            f.push_back(v[i]);
        else
            b.push_back(v[i]);
    }

    t = f.size();
    if (t)
    {
        bef = f.front();
        ans++;
        for (int i = 1; i < t; i++)
        {
            if (bef < f[i])
                ans++;
            bef = f[i];
        }
    }
    t = b.size();
    if (t)
    {
        bef = b.front();
        ans++;
        for (int i = 1; i < t; i++)
        {
            if (bef < b[i])
                ans++;
            bef = b[i];
        }
    }
    cout << ans << '\n';
    return 0;
}