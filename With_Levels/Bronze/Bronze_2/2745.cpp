// problem: 진법 변환
// id: 2745
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    int b;
    ll ans = 0;
    cin >> n >> b;

    int iter = n.length();
    int idx = 1;
    for (int i = iter - 1; i >= 0; i--)
    {
        if ('0' <= n[i] && n[i] <= '9')
            ans += idx * (n[i] - '0');
        else
            ans += idx * (n[i] - 'A' + 10);
        idx *= b;
    }
    cout << ans;

    return 0;
}