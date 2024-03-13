// problem: 물병
// id: 1052
// time taken:

#include <bits/stdc++.h>
using namespace std;

#define ui unsigned int

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ui n, k;
    cin >> n >> k;
    if (n <= k)
    {
        cout << 0 << '\n';
        return 0;
    }
    ui ans = 0;
    while (true)
    {
        int cnt = 0;
        ui temp = n;
        while (temp > 0)
        {
            if (temp % 2 != 0)
                cnt++;
            temp >>= 1;
        }
        if (cnt <= k)
            break;
        n++;
        ans++;
    }
    cout << ans << '\n';

    return 0;
}