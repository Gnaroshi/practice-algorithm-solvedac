// problem: Factorial Again!
// id: 5692
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        int t = 1;
        int l = 1;
        int ans = 0;
        while (n > 0)
        {
            ans += (n % 10) * t;
            l++;
            t *= l;
            n /= 10;
        }
        cout << ans << '\n';
    }

    return 0;
}
