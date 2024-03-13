// problem: 받아올림
// id: 4388
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int a, b;
        cin >> a >> b;
        if (a + b == 0)
            break;
        int ans = 0;
        bool isC = false;
        while (a > 0 || b > 0)
        {
            if (a % 10 + b % 10 + isC > 9)
                isC = true;
            else
                isC = false;
            a /= 10;
            b /= 10;
            if (isC)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}