// problem: 헤일스톤 수열
// id: 3943
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, mx;
        cin >> n;
        mx = n;
        while (n != 1)
        {
            if (n % 2)
                n = n * 3 + 1;
            else
                n /= 2;
            mx = max(mx, n);
        }
        cout << mx << '\n';
    }

    return 0;
}