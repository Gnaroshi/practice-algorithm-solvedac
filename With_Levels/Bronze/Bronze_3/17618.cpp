// problem: 신기한 수
// id: 17618
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int t = i;
        int s = 0;
        while (t > 0)
        {
            s += t % 10;
            t /= 10;
        }
        if (i % s == 0)
            ans++;
    }
    cout << ans;

    return 0;
}
