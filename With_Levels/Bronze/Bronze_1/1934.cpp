// problem: 최소공배수
// id: 1934
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, temp, ta, tb;
    ll ans = 1;
    cin >> a >> b;
    ta = a;
    tb = b;
    if (a == b)
    {
        cout << a << '\n';
        return 0;
    }
    while (true)
    {
        if (b > a)
        {
            temp = a;
            a = b;
            b = temp;
        }
        temp = a % b;
        a = b;
        b = temp;
        if (b == 0)
            break;
    }
    cout << ta * tb / a << '\n';

    return 0;
}