// problem: G번 - 개발자 지망생 구름이의 취업 뽀개기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, cnt = 0;
    cin >> n;
    vector<int> p(5);
    for (auto &i : p)
        cin >> i;
    vector<vector<int>> v(5);
    for (int i = 0; i < n; i++)
    {
        int k, t;
        cin >> k >> t;
        v[k - 1].emplace_back(t);
    }
    for (int i = 0; i < 5; i++)
        sort(v[i].begin(), v[i].end());
    for (int i = 0; i < 5; i++)
    {
        int c = p[i];
        if (c != 0)
        {
            cnt++;
            ans += v[i][0];
            for (int j = 1; j < c; j++)
                ans += 2 * (v[i][j]) - v[i][j - 1];
        }
    }
    cout << ans + (cnt - 1) * 60;

    return 0;
}