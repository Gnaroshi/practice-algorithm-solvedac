// problem: 상금 헌터
// id: 15953
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        if (a == 0)
            ans = 0;
        else if (a == 1)
            ans += 500;
        else if (a <= 3)
            ans += 300;
        else if (a <= 6)
            ans += 200;
        else if (a <= 10)
            ans += 50;
        else if (a <= 15)
            ans += 30;
        else if (a <= 21)
            ans += 10;
        int bin = 2, p = 512;
        if (b != 0)
            for (int i = 0; i < 5; i++)
            {
                if (b <= bin - 1)
                {
                    ans += p;
                    break;
                }
                bin *= 2;
                p /= 2;
            }
        ans *= 10000;
        cout << ans << '\n';
    }

    return 0;
}