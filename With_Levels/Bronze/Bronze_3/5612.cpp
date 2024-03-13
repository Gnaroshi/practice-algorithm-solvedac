// problem: 터널의 입구와 출구
// id: 5612
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, mx = -1, cur;
    cin >> n >> m;
    bool isOk = true;
    cur = m;
    mx = m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cur += a - b;
        if (cur < 0)
            isOk = false;
        mx = max(cur, mx);
    }
    if (isOk)
        cout << mx;
    else
        cout << 0;
    return 0;
}