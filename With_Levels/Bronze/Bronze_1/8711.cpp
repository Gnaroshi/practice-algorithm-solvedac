// problem: Odchudzanie
// id: 8711
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w, a = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        a = max(a, w);
        if (a - w > ans)
            ans = a - w;
    }
    cout << ans;

    return 0;
}