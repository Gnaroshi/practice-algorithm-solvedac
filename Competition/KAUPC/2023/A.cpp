// problem: A번 - 스케이트보드
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, mx = -1;
    cin >> tc;
    while (tc--)
    {
        int r[2], t[5];
        for (int i = 0; i < 2; i++)
            cin >> r[i];
        for (int i = 0; i < 5; i++)
            cin >> t[i];
        sort(t, t + 5, greater<>());
        mx = max(mx, *max_element(r, r + 2) + t[0] + t[1]);
    }
    cout << mx;

    return 0;
}