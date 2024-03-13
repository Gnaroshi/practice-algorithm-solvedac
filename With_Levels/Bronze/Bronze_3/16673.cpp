// problem: 고려대학교에는 공식 와인이 있다
// id: 16673
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, k, p;
    cin >> c >> k >> p;
    long long ans = 0;
    for (int i = 1; i <= c; i++)
        ans += k * i + p * i * i;
    cout << ans;

    return 0;
}