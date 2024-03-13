// problem: A번 - 민주주의
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 'O')
                cnt++;
        }
        if (cnt * 2 >= m)
            ans++;
    }
    cout << ans;

    return 0;
}