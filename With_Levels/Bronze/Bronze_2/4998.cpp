// problem: 저금
// id: 4998
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n, m, b;
    while (cin >> n >> b >> m)
    {
        int ans = 0;
        b /= 100;
        while (n <= m)
        {
            n += n * b;
            ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}