// problem: 공약수
// id: 5618
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<vector<int>> q(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        int t = v[i];
        for (int j = 1; j * j <= t; j++)
        {
            if (t % j == 0)
            {
                q[i].push_back(j);
                if (j != t / j)
                    q[i].push_back(t / j);
            }
        }
    }

    vector<int> ans;

    for (auto i : q[0])
    {
        int cnt = 1;
        for (int j = 1; j < n; j++)
        {
            bool chk = false;
            for (auto k : q[j])
            {
                if (k == i)
                {
                    chk = true;
                    break;
                }
            }
            cnt += chk;
        }
        if (cnt == n)
            ans.emplace_back(i);
    }
    sort(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << '\n';

    return 0;
}