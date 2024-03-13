// problem: 선 그리기
// id: 16396
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool chk[10001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = a; i < b; i++)
            chk[i] = 1;
    }
    int ans = 0;
    for (int i = 1; i <= 10000; i++)
        ans += chk[i];
    cout << ans << '\n';

    return 0;
}