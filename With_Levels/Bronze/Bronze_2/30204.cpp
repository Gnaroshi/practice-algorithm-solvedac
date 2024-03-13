// problem: 병영외 급식
// id: 30204
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, cur = 0, t;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cur += t;
        if (cur % x == 0)
            cur = 0;
    }
    cout << (cur ? 0 : 1);

    return 0;
}