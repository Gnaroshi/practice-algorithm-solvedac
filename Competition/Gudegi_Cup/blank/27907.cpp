// problem:
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;

    if (n > 27)
        cout << -1;
    else
    {
        for (int i = 0; i < n; i++)
            cout << 224584605939537911 + 81292139 * 223092870 * i << ' ';
    }

    return 0;
}