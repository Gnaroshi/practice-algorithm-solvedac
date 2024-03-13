// problem: City of Lights
// id: 17554
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool l[1000001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t, cnt, mx = 0;
    cin >> n >> k;
    fill(l, l + n + 1, 0);
    for (int i = 0; i < k; i++)
    {
        cin >> t;
        for (int j = t; j <= n; j += t)
            l[j] = !l[j];
        cnt = 0;
        for (int j = 1; j <= n; j++)
            cnt += l[j];
        mx = max(mx, cnt);
    }
    cout << mx;

    return 0;
}