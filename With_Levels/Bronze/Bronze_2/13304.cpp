// problem: 방 배정
// id: 13304
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, s, y, ans = 0;
    cin >> n >> k;
    int st[2][6] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> s >> y;
        st[s][y - 1]++;
    }
    for (int i = 0; i < 2; i++)
    {
        ans += st[0][i] + st[1][i];
    }
    ans = (ans + k - 1) / k;
    for (int i = 2; i < 6; i += 2)
    {
        for (int j = 0; j < 2; j++)
        {
            ans += (st[j][i] + st[j][i + 1] + k - 1) / k;
        }
    }
    cout << ans;
    return 0;
}