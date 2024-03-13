// problem: 출석 이벤트
// id: 25704
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, ans;
    cin >> n >> p;
    if (n >= 20)
        ans = min(int(p * 0.75), p - 2000);
    else if (n >= 15)
        ans = min(int(p * 0.9), p - 2000);
    else if (n >= 10)
        ans = min(int(p * 0.9), p - 500);
    else if (n >= 5)
        ans = p - 500;
    else
        ans = p;
    if (ans < 0)
        cout << 0 << '\n';
    else
        cout << ans << '\n';
    return 0;
}