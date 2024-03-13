// problem: 0의 개수
// id: 11170
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {
            string s = to_string(i);
            for (auto j : s)
            {
                if (j == '0')
                    ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}