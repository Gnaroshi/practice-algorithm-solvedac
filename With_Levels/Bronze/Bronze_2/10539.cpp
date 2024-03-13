// problem: 수빈이와 수열
// id: 10539
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, s;
    cin >> n >> t;
    cout << t;
    if (n == 1)
    {
        return 0;
    }
    s = t;
    for (int i = 2; i <= n; i++)
    {
        cin >> t;
        t *= i;
        cout << ' ' << t - s;
        s += t - s;
    }

    return 0;
}