// problem: Another Cow Number Game
// id: 6190
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, ans = 0;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            n *= 3;
            n++;
        }
        else
            n /= 2;
        ans++;
    }
    cout << ans;

    return 0;
}