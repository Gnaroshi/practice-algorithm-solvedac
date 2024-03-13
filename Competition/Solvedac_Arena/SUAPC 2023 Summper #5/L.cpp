// problem: L번 - 나의 FIFA 팀 가치는?
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n, k, t, ans = 0;
    cin >> n >> k;
    vector<priority_queue<int>> v(11);
    for (int i = 0; i < n; i++)
    {
        int p, w;
        cin >> p >> w;
        v[p - 1].push(w);
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (!v[j].empty())
            {
                t = v[j].top();
                v[j].pop();
                t--;
                if (t > 0)
                    v[j].push(t);
            }
        }
    }
    for (int i = 0; i < 11; i++)
    {
        if (!v[i].empty())
            ans += v[i].top();
    }
    cout << ans;

    return 0;
}