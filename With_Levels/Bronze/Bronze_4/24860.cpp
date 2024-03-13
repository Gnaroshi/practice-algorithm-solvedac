// problem: Counting Antibodies
// id: 24860
// time taken:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = 0;
    int a, b, c;

    for (int i = 0; i < 2; i++)
    {
        cin >> a >> b;
        ans += a * b;
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> c;
        ans *= c;
    }
    cout << ans;

    return 0;
}