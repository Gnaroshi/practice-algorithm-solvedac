// problem: 전체 계산 횟수
// id: 17174
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int ans = n;
    n /= m;
    while (n > 0)
    {
        ans += n;
        n /= m;
    }
    cout << ans;

    return 0;
}