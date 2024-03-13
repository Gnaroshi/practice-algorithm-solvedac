// problem: 내 학점을 구해줘
// id: 10984
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(2);
    while (tc--)
    {
        int n, cnt = 0;
        cin >> n;
        double ans = 0, c, g;
        for (int i = 0; i < n; i++)
        {
            cin >> c >> g;
            cnt += c;
            ans += c * g;
        }
        cout << cnt << ' ' << ans / cnt << '\n';
    }

    return 0;
}