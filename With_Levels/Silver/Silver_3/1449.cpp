// problem: 수리공 항승
// id: 1449
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, t, cnt = 0;
    cin >> n >> l;
    int p[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        p[t] = 1;
    }
    for (int i = 1; i <= 1000; i++)
    {
        if (p[i])
        {
            for (int j = i; j < min(i + l, 1001); j++)
                p[j] = 0;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}