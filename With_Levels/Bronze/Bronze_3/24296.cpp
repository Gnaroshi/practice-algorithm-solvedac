// problem: ЛИНИЯ
// id: 24296
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    int cnt = 2, t;
    while (true)
    {
        bool chk = false;
        t = cnt;
        while (true)
        {
            if (t == n)
            {
                chk = true;
                break;
            }
            if (t > n)
                break;
            t += t - 1;
        }
        if (chk)
            break;
        cnt++;
    }
    cout << cnt;

    return 0;
}