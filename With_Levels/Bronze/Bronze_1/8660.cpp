// problem: Sumy i różnice
// id: 8660
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k = 0, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a < 0)
            k++;
    }
    cout << k * (n - 1);

    return 0;
}