// problem: Robot Rock Band (Small)
// id: 12044
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int n, k, t, ans = 0;
        cin >> n >> k;
        vector<vector<unsigned int>> v(4);
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> t;
                v[i].emplace_back(t);
            }
        }
        for (auto i : v[0])
            for (auto j : v[1])
                for (auto p : v[2])
                    for (auto l : v[3])
                        if ((i ^ j ^ p ^ l) == k)
                            ans++;

        cout << "Case #" << tcc << ": " << ans << '\n';
    }

    return 0;
}