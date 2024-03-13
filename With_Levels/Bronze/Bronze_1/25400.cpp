// problem: 제자리
// id: 25400
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cur = 1, ans = 0, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == cur)
            cur++;
        else
            ans++;
    }
    cout << ans;

    return 0;
}